
// int reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;

//         while(curr!=NULL){
//             ListNode* nextNode = curr->next; 
//             curr->next = prev;
//             prev=curr;
//             curr=nextNode;
//         }
//         return prev;
// }
   
    
//REVERSE USING RECURSION
/*
ListNode* reverse(ListNode* prev,ListNode* curr){
// base case    
    if (curr == NULL)
        return prev;
     
//   ek case solve krliya
    ListNode *nextNode = curr->next;
    curr->next = prev;
 

//  baaki recursion
    return reverse(curr, nextNode);

}
*/