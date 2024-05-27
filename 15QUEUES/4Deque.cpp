#include<iostream>
#include<deque>
using namespace std;

class Deque{
    public:
    int* arr;
    int size;
    int front;
    int rear;
    Deque(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    

    void pushFront(int val){
        // overflow
        // empty case
        // normal flow

        if(front == 0){
            cout<<"overflow"<<endl;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[front] = val;
        }
        else{
            front--;
            arr[front] = val;
        }

    }
    void pushBack(int val){
        // overflow
        // empty case
        // normal flow

        if(rear == size -1){
            cout<<"overflow"<<endl;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }

    void popFront(){
        // underflow
        // single case
        // normal

        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }

    void popBack(){
        // underflow
        // single case
        // normal


        if(front == -1 && rear == -1){
            cout<<"underflow"<<endl;
        }
        else if(front == rear){
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else{
            arr[rear] = -1;
            rear--;
        }
    }
};
int main(){
    // deque<int>dq;

    // dq.push_back(10);
    // dq.push_front(20);
    // dq.pop_back();

    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;
    // cout<<"Size: "<<dq.size()<<endl;
return 0;
}