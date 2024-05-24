#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// TIME COMPLEXITY -> O(n)
void reverseKElement(queue<int>& q,int k){
    stack<int>st;
    int n = q.size();

    if(k>n || k==0){ ///yh case agr k ki value n se kaam h ya k = 0 h toh chlega
        return ;
    }
    // push first k element into stack 
    for(int i=0;i<k;i++){
        int temp = q.front();
        q.pop();
        st.push(temp);
    }
    // push all k element into queue

    while(!st.empty()){
        int temp = st.top();
        st.pop();
        q.push(temp);
         
    }
    // pop and push first(n-k) element into queue again
    for(int i=0;i<(n-k);i++){
        int temp = q.front();
        q.pop();
        q.push(temp);
    }


}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    int k ;
    cin>>k;

    reverseKElement(q,k);
    cout<<"Printing reverse queue: "<<endl;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        cout<<element<<" ";
    }


return 0;
}