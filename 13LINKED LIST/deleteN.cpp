// delete n to after m nodes
#include<iostream>
using namespace std;

class solution{
    public:
    void Linkdelete(struct Node* head,int M,int N){
        if(!head){
            return;
        }
        Node* it = head;
        for(int i=0;i<m-1;i++){
            // if m nodes are N.A
            if(!it){
                return;
            }
            it = it->next;
        }
        // it->would be at Mth node
        if(!it){
            return;
        }
        Node* Mthnode =it;
        it = Mthnode->next;
        for(int i=0;i<N;i++){
            if(!it){
                break;
            }
            Node* temp = it->next;
            delete it;
            it = temp;
        }
        Mthnode->next=it;
        Linkdelete(it,M,N);
    }
};

*/
