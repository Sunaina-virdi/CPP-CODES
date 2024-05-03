// LEET CODE 83
/*
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return head;
        }
        if(head->next == NULL){
            return head;
        }
        ListNode* temp = head;
        while(temp != NULL){
            if(temp->next != NULL && temp->val == temp->next->val){
                // remove krdo
                ListNode* newnode = temp->next;
                temp->next = newnode->next;
                newnode->next = NULL;
                delete newnode;
            }
            else{
                // aage bado
                temp=temp->next;
            }
        }
        return head;
    }
};
*/