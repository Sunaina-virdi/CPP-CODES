/*
class Solution {
public:
    int getLength(ListNode* head){
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }

    ListNode* middleNode(ListNode* head) {
        int n= getLength(head);
        int position = n/2+1;
        int currPos = 1;
        ListNode* temp = head;
        while(currPos != position){
            currPos++;
            temp = temp->next;
        }
        return temp;
    }
};

// TORTURE algorithm

class Solution {
public:
    int getLength(ListNode* head){
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }

    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

// even length m [2->4->6->8->10->12]  ans 8
// while(fast != NULL)
// even length m [2->4->6->8->10->12]  ans 6 
// while(fast->next != NULL)

        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            }
            // m yaha keh skata hu fast n 2step chl liye
            // ab slow ko bhi chalwao ek step
            slow = slow->next;
        }
    }

*/