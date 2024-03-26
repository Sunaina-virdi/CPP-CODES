#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int>&st,int &element){
    // base case (base case m return jruri h bht)
    if(st.empty()){
        st.push(element);
        return ;
    }
    // 1 case m solve kruga
    int temp = st.top();
    st.pop();

    // recursion
    InsertAtBottom(st, element);
    
    //backtraking
    st.push(temp);
}

void reverseStack(stack<int>&st){
    // base case
    if(st.empty()){
        return;
    }
    // 1 case m solve kruga
    int temp = st.top();
    st.pop();

    // recursion
    reverseStack(st);

    // backtraking
    InsertAtBottom(st,temp);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    reverseStack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();

    }

return 0;
}