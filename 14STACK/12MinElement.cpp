// LEET CODE
// QUESTION NO 155

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<pair<int,int>>st;

void push(int val){
    if(st.empty()){
        // it means, i am inserting first element
        pair<int,int> p ;
        p.first=val;
        p.second=val;
        st.push_back(p); 
    }
    else{
        pair<int,int> p ;
        p.first = val;
        int puranaMin = st.back().second;
        p.second = min(puranaMin,val);  
        st.push_back(p);   
    }
}

void pop(){
    st.pop_back();
}
int top(){
    pair<int,int>rightMostPair = st.back();
    return rightMostPair.first;
}
int getMin(){
    pair<int,int> rightMostPair = st.back();
    return rightMostPair.second;
}
