#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Using stack
// void reverseQueue(queue<int> &q){
//     stack<int>s;

//     // one by one queue se element lo and stack m daalo
//     while(!q.empty()){
//         int frontElement = q.front();
//         q.pop();
//         s.push(frontElement);
//     }
//     // one by one stack se lo or queue m push kro
//     while(!s.empty()){
//         int element = s.top();
//         s.pop();
//         q.push(element);
//     }
// }

//using recursion
void reverse(queue<int>& q){
    // base case
    if(q.empty()){
        return ;
    }
    int element = q.front();
    q.pop();
    reverse(q);
    q.push(element);
}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverse(q);
    cout<<"Printing reverse queue: "<<endl;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        cout<<element<<" ";
    }
return 0;
}