#include<iostream>
#include<unordered_map>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode *next;

};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode* , bool> mapping;
        ListNode* temp = head;
        while(temp!= NULL){
            // address check
            if(mapping.find(temp) != mapping.end()){
                // cycle present
                return true;
            }
            else{
                mapping[temp] == true;
            }
            temp = temp->next;

        }
        // cycle absent
        return false;
    }
};

int main(){

return 0;
}