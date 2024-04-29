// LEET CODE
// QUES NO 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// 
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         this->data = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

class info{
    public:
        int maxVal;
        bool isHeap;
        info(int a,bool b){
            this->maxVal = a;
            this->isHeap = b;
        }
};

info checkMaxHeap(node* root){
    // base case
    // null ka case
    if(root == NULL){
        info temp;
        temp.maxVal = INT_MIN;
        temp.isHeap = true;
        return temp;
    }

    // leaf node ka case
    if(root->left == NULL && root->right == NULL){
        info temp;
        temp.maxValue = root->data;
        temp.isHeap = true;
        return temp;
    }
    // left ka case
    info leftInfo = checkMaxHeap(root->left);
    // right ka case
    info rightInfo = checkMaxHeap(root->right);

    // 1 case mujhe solve krna h
    if(root->data > leftInfo.maxVal && root->data > rightInfo.maxVal && 
    leftInfo.isHeap && rightInfo.isHeap){
        info ans;
        ans.maxVal = root->data;
        ans.isHeap = true;
        return ans;
    }
    else{
        info ans;
        ans.maxValue = max(root->data, max(leftInfo.maxVal, rightInfo.maxVal));
        ans.isHeap = false;
        return ans;
    }
}

int main(){

return 0;
}