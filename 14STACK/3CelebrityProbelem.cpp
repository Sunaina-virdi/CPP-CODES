// geeks for geeks

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int celebrity(vector<vector<int> >&M,int n){
        stack<int>st;
        // step1: push all persons into stack
        for(int i=0;i<n;i++){
            st.push(i);
        }
        // step2:(run discard method)  keep popping from the stack and check if person at top of the stack is known by someone else
        while(st.size()!=1){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            // if a knows b ? 
            if(M[a][b]){
                // a is not celebrity,b might be
                st.push(b);
            }
            else{
                // b is not celebrity,a might be 
                st.push(a);
            }
        }
        // step 3:check that single person is actually celebrity ?
        int mightBeCelebrity = st.top();
        st.pop();
        // celebrity should not know anyone
        for(int i=0;i<n;i++){
            if(M[mightBeCelebrity][i] != 0){
                return -1;   // no celebrity present in matrix M
            }
        }
        // everyone should know celebrity
        for(int i=0;i<n;i++){
            if(M[i][mightBeCelebrity] == 0 && i!=mightBeCelebrity){
                return -1;
            }
        }
        //  celebrity found mightBeCelebrity,return id of celebrity
        return  mightBeCelebrity;
    }
};
