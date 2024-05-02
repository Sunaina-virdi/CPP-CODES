#include <iostream>
#include <vector>

using namespace std;


class ListNode {
public:
    int val;
    ListNode* next;
    
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* array_to_linked_list(vector<int>& nums) {
    if(nums.empty())
        return nullptr;
    
    ListNode* head = new ListNode(nums[0]);
    ListNode* current = head;
    
    for(int i = 1; i < nums.size(); ++i) {
        current->next = new ListNode(nums[i]);
        current = current->next;
    }
    
    return head;
}
void insertAtHead(ListNode* &head,ListNode* &tail,int val){ 
    if(head == NULL){
        ListNode* newNode = new ListNode(val);   
        head = newNode;
        tail = newNode;   
    }
    else{
        ListNode* new_node = new ListNode(val);
        new_node->next = head;
        head = new_node;
    }

}

void printLinkedList(ListNode* head) {
    while(head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n) ;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    ListNode* linked_list = array_to_linked_list(nums);
    
    ListNode* head =NULL;
    ListNode* tail =NULL;
    insertAtHead(head,tail,2);
    printLinkedList(linked_list);

    return 0;
}