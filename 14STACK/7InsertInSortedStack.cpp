#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int>&st,int element){
    // base case
    if(st.empty() ||element > st.top()){ //phle check kro stack empty h ki nhi fir top access kro
        st.push(element);
        return;
    }
    // 1 case sambhalna h
    int temp = st.top();
    st.pop();

    // recursion
    insertSorted(st,element);

    // backtraking
    st.push(temp);

}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    insertSorted(st,25);
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
return 0;
}