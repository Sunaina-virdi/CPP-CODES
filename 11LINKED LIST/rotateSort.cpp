// LEETCODE 61
// ROTATE LIST
#include<iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:

    int getLength(ListNode* head){
        int len = 0;
        while(head){
            len++;
            head =head->next;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head){
            return 0;
        }
        // list ki length
        int len = getLength(head);
        int ActualRotateK = k%len;
        if(ActualRotateK==0){
            return head;
        }
        int NewLastNodePos = len-ActualRotateK-1;
        ListNode* newlastnode = head;
        for(int i=0;i<NewLastNodePos;i++){
            newlastnode = newlastnode->next;
        }
        ListNode* newhead = newlastnode->next;
        newlastnode->next=NULL;

        ListNode* it = newhead;
        while(it->next){
            it = it->next;
        } 
        it->next = head;
        return newhead;
        
    }
};

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);
    ListNode* fifth = new ListNode(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Print the original list
    ListNode* current = head;
    while (current) {
        cout << current->val << "->";
        current = current->next;
    }
    cout << endl;

    // Rotate the list to the right by 2 positions
    Solution solution;
    ListNode* rotatedHead = solution.rotateRight(head, 2);

    // Print the rotated list
    current = rotatedHead;
    while (current) {
        cout << current->val << "->";
        current = current->next;
    }
    cout << endl;

    return 0;
}