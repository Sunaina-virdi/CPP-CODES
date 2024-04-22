#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* searchInBST(Node* root,int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(data < root->data){
        root->left = searchInBST(root->left,data);
    }
    else{
        root->right = searchInBST(root->right,data);
    }
    return root;
    
}

void createBST(Node* &root){
    cout<<"Enter node: "<<endl;
    int data;
    cin>>data;
    while(data != -1){
        root = searchInBST(root,data);
        cout<<"Enter data: "<<endl;
        cin>>data;

    }
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }

}

Node* maxValue(Node* root){
    if(root == NULL){
        cout<<"No Max Value exists"<<endl;
        return NULL;
    }
    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root,int target){
    // target ko dhundo
    // target ko delete kro

    if(root == NULL){
        return NULL;
    }
    if(root->data == target){
        // ab delete krege
        // 4 cases

        // 1 case->leaf node
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // 2 case ->left non null and right null
        else if(root->left != NULL && root->right == NULL){
            Node* childSubtree = root->left;
            delete root;
            return childSubtree;
        }
        // 3 case ->left null and right not null

        else if(root->left == NULL && root->right != NULL){
            Node* childSubtree = root->right;
            delete root;
            return childSubtree;
        }
        // 4 case -> root->left != NULL && root->right != NULL
        else{
            // a ->left subtrre ki max value lao
            Node* maxi = maxValue(root->left);
            // replacement
            root->data = maxi->data;
            // delete actual maxi wali node
            root->left = deleteFromBST(root->left,maxi->data);
            return root;
        }


    }
    else if(root->data > target){
        // target left m h 
        root->left = deleteFromBST(root->left,target);

    }
    else{
        //target right m h 
        root->right = deleteFromBST(root->right,target);
    }
    return root;

}

int main(){
    Node* root = NULL;
    createBST(root);

    levelOrderTraversal(root);

    Node* maxNode = maxValue(root);
	if(maxNode == NULL) {
		cout << "There is no node in tree, so no max value" << endl;
	}
	else {
		cout << "Max Value: " << maxNode->data << endl;
	}

    int target ;
    cout<<"enter target: "<<endl;
    cin>>target;
    while(target != -1){
        root = deleteFromBST(root,target);
        cout<<endl<<"Printing level order traversal: "<<endl;
        levelOrderTraversal(root);
        cout<<"enter target: "<<endl;
        cin>>target;
    }
return 0;
}