// VALID PARENTHESES
// LEET CODE 20
#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='(' || ch=='[' || ch=='{'){
                // agr opening braket h toh stack m push kro
                st.push(ch);
            }
            else{
                // check stack is not empty
                if(!st.empty()){
                    // closing brackets
                    if(ch==')' && st.top()=='('){
                        st.pop();
                    }
                    else if(ch==']' && st.top()=='['){
                        st.pop();
                    }
                    else if(ch=='}' && st.top()=='{'){
                        st.pop();
                    }
                    else{
                        // no match
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(st.size() == 0){
            // if stack is empty than every operation worked successfully
            return true;
        }
        else{
            return false;
        }
    }
};


int main() {
    Solution sol;
    string testString = "{[()]}";
    if (sol.isValid(testString)) {
        cout << "The string \"" << testString << "\" contains valid brackets." << endl;
    } else {
        cout << "The string \"" << testString << "\" contains invalid brackets." << endl;
    }

    return 0;
}