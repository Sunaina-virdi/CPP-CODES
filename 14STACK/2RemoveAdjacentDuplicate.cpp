// LEET CODE 
// QUES NO 1047

#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

class Solution{
    public:
    string removeDuplicates(string s){
        stack<char>st;
        for(auto ch:s){
            if(st.empty()){
                st.push(ch);
            }
            else if(!st.empty() && st.top() == ch){
                // pair up
                st.pop();
            }
            else{
                // eska mtlb top character or present character same nhi h
                st.push(ch);
            }
        }
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main(){

return 0;
}