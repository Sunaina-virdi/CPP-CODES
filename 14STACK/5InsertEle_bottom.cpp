#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st,int &element){
    // base case
    if (st.empty()) {
        st.push(element);
        return;
    }
    // 1 case m solve krta hu
    int temp = st.top();
    st.pop();

    // baki rec
    insertAtBottom(st, element);

    // backtracking
    st.push(temp);
}

int main(){

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);

    int element = 400;

    insertAtBottom(st,element);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();

    }
return 0;
}