// leetcode 2816
// DOUBLE A NUMBER REPRESENTED AS A LINKED LIST
#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Solution {
public:
    void solve(ListNode* head, int& carry){
        if(!head){
            return;
        }
        solve(head->next,carry);  //reverse chlege puri linked list
        int prod = head->val * 2 + carry;
        head->val= prod % 10;
        carry = prod / 10;
    }
    ListNode* doubleIt(ListNode* head) {
        int carry = 0;
        solve(head,carry);
        if(carry){ //agr end m carry bach jata h toh new node bnake usse head bna dege
            ListNode* carryNode = new ListNode(carry);
            carryNode->next = head;
            head = carryNode;
        }
        return head;
    }
};