/* LEET CODE
QUESTION NO 160
*/
#include<iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*a = headA;
        ListNode*b = headB;

        while(a->next && b->next){
            if(a==b){
                return a;
            }
            a=a->next;
            b=b->next;
        }
        if(a->next == 0){
            // B LL is bigger
            // we need to find out how much bigger it is
            int blen=0;
            while(b->next){
                blen++;
                b=b->next;
            }
            while(blen--){
                headB= headB->next;
            }
        }
        if(b->next == 0){
            // A LL is bigger
            // we need to find out how much bigger it is
            int alen=0;
            while(a->next){
                alen++;
                a=a->next;
            }
            while(alen--){
                headA= headA->next;
            }
        }
        while(headA!=headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;

    }
};

int main(){
    Solution s;
    ListNode* commonNode = new ListNode(6);
    commonNode->next = new ListNode(4);
    commonNode->next->next = new ListNode(5);

    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = commonNode;

    ListNode *headB = new ListNode(5);
    headB->next = new ListNode(0);
    headB->next->next = new ListNode(1);
    headB->next->next->next = commonNode;

    ListNode *intersection = s.getIntersectionNode(headA, headB);
    if (intersection)
        cout << "Intersection node value: " << intersection->val << endl;
    else
        cout << "No intersection found." << endl;

    return 0;
}
