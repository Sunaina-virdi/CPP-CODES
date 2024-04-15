#include<iostream>
#include<queue>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree(){
    cout<<"Element the value for Node: ";
    int value;
    cin>>value;

    if(value == -1){
        return NULL;
    }

    // create Node;
    Node* root = new Node(value);
    // cout<<"Enter the left of: "<<value<<endl;
    root->left = createTree();
    // cout<<"Enter the right of: "<<value<<endl;
    root->right = createTree();
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node* >q;
    q.push(root);
    q.push(NULL);  // To indicate the end of a level
    cout<<endl;
    while((q.size() > 1)){
        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }
}

void printTopView(Node* root){
    map<int,int>hdToNodemap;
    queue<pair<Node* ,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*, int>temp = q.front();
        q.pop();
        
        Node* frontNode = temp.first;
        int hd = temp.second;

        // if there is not entry for hd in map,then create a new entry
        if(hdToNodemap.find(hd) == hdToNodemap.end()){
            hdToNodemap[hd] = frontNode->data;
        }
        // child ko dekhna h 
        if(frontNode->left != NULL){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right != NULL){
            q.push(make_pair(frontNode->right,hd+1));
        }
    } 
    cout<<"Printing top view: "<<endl;
    for(auto i: hdToNodemap){
        cout<<i.second<<" ";
    }
}

void printBottomView(Node* root){
    map<int,int>hdToNodemap;
    queue<pair<Node* ,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*, int>temp = q.front();
        q.pop();
        
        Node* frontNode = temp.first;
        int hd = temp.second;

        // overwrite answers so that the deeper nodes can be stored
        hdToNodemap[hd] = frontNode->data;
        // child ko dekhna h 
        if(frontNode->left != NULL){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right != NULL){
            q.push(make_pair(frontNode->right,hd+1));
        }
    } 
    cout<<"Printing Bottom view: "<<endl;
    for(auto i: hdToNodemap){
        cout<<i.second<<" ";
    }
}

int main(){
    Node* root = createTree();
    levelOrderTraversal(root);
//  10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1

printTopView(root);

cout<<endl;

printBottomView(root);


return 0;
}



