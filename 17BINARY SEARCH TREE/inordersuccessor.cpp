//            5
//          /   \
//        3       7
//       / \     / \
//     2    4   6    9
//    /             / \
//   1             8   10

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
Node* inordersuccessor(Node* root,Node* x){
    Node* succ = 0;
    Node* curr = root;
    while(curr){
        // left m jana h
        if(curr->data > x->data){
            succ = curr;
            curr = curr->left;
        }
        // right m jana h
        else{
            curr = curr->right;
        }
    }
    return succ;
}
int main(){

return 0;
}