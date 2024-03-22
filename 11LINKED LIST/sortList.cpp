
// Sort List using Merge sort
// LEETCODE - 148

class solution{
    public:

    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* left, ListNode* right) {
        if(left == 0){
            // agr left null h toh right ans hoga
            return right;
        }
        if(right == 0){
            // agr right null h toh left ans hoga
            return left;
        }
        ListNode* ans = new ListNode(-1);
        ListNode*mptr = ans;

        while(left && right){
            if(left->val <= right->val){
                mptr->next = left;
                mptr = left;
                left = left->next;
            } 
            else{
                mptr->next=right;
                mptr = right;
                right = right->next;
            }
        }
        if(left){
            // left bach gya h toh
            mptr->next = left;
        }
        if(right){
            // right bach gya h toh
            mptr->next = right;
        }
        return ans->next;

    }

    ListNode* sortList(ListNode* head){
        // LL is NULL or LL 1->NULL
        if(head == 0 || head->next == 0){
            return head;
        }
        // Break LL into two halves using mid node
        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next=0;

        // sort RE
        left = sortList(left);
        right = sortList(right);
        
        // merge the sorted lists
        return merge(left, right);
    }
}


