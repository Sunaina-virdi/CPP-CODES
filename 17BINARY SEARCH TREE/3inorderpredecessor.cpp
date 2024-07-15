//            5
//          /   \
//        3       7
//       / \     / \
//     2    4   6    9
//    /             / \
//   1             8   10

// 3 < 5   
// 9 > 5
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* inorderPredecessor(Node* root,Node* x){
    Node* pred = 0;
    Node* curr = root;
    while(curr){
        if(curr->data < x->data){
            pred = curr;
            curr = curr->right;
        }
        else{
            curr = curr->left;
        }
    }
    return pred;
}

int main(){

return 0;
}