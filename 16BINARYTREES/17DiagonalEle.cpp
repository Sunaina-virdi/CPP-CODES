// GEEK FOR GEEKS
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val =val;
        this->left = NULL;
        this->right = NULL;
    }
};


vector<int> diagonal (Node* root){
    vector<int>ans;
    if(!root){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        while(temp){
            ans.push_back(temp->val);
            if(temp->left){
                // baad m dkehna h
                q.push(temp->left);
            }
            temp= temp->right;
        }
    }
    return ans;
}

int main(){

return 0;
}