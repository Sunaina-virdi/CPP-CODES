// leetcode 328
#include<iostream>
using namespace std;
class ListNode{
    public:
        int data;
        ListNode*next;
};
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || head->next == 0){
            return head;
        }
        ListNode* h1 = head; //odd node list 
        ListNode* h2 = head->next; //even indexed list

        ListNode* evenHead = h2;
        while(h2 && h2->next){
            h1->next = h2->next;  //1->3
            h2->next = h2->next->next;  //2->4
            h1 = h1->next;
            h2 = h2->next;
        }
        // the two independent prepared list has been regrouped
        h1->next = evenHead;
        return head;
    }
};