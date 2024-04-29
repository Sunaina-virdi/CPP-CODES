#include<iostream>
#include<queue>
using namespace std;
int main(){
    // create min heap
    priority_queue<int,vector<int>,greater<int>>pq;

    // insertion
    pq.push(100);
    pq.push(90);
    pq.push(70);

    cout<<"top element of heap: "<<pq.top()<<endl;
    pq.pop();
    cout<<"top element of heap: "<<pq.top()<<endl;
    cout<<"size of heap: "<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"Heap is empty"<<endl;
    }
    else{
        cout<<"heap is not empty"<<endl;
    }
return 0;
}