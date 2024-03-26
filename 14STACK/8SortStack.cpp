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

void sortStack(stack <int>& st){
    if(st.empty()){
        return;
    }
    // 1 case solve
    int temp = st.top();
    st.pop();

    // recursion
    sortStack(st);

    // backtraking;
    insertSorted(st,temp);
} 

int main(){
    stack<int>st;
    st.push(10);
    st.push(7);
    st.push(22);
    st.push(1);
    st.push(11);

    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
return 0;
}