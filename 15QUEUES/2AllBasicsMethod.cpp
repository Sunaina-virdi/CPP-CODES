#include<iostream>
#include<queue>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    // push
    void push(int val){
        // check full
        if(rear == size-1){
            cout<<"Queue OverFlow"<<endl;
            return;
        }
        else if(front == -1 && rear == -1){
            // empty case
            front++;
            rear++;
            arr[rear] = val;
        }
        else{
            // normal case
            rear++;
            arr[rear] = val;
        }

    }

    // pop
    void pop(){
        // underflow
        if(front == -1 && rear == -1) {
            cout << "Queue UnderFlow" << endl; 
            return ;  
        } 
        else if(front == rear){
            // empty case -> single element
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{
            // normal case
            arr[front]=-1;
            front++ ;
        }
    }

    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
    }

    int getSize(){
        if(front==-1 && rear == -1){
            return 0;
        }
        else{
            return rear-front+1;
        }
    }

    int getFront(){
        // queue empty
        if(front == -1){
            cout<<"No element in queue,cannot give front element"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int getrear(){
        // queue empty
        if (isEmpty()) {
            cout << "Queue is Empty." << endl;
            return -1;
        }
        else {
            return arr[rear];
        }
    }

    void print(){
        cout<<"Printing Queue: ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
};

int main(){

    // creation
    Queue q(5);
    q.print();

    q.push(10);
    q.print();
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();

    cout<<"Size of Queue: "<<q.getSize()<<endl;

    q.pop();
    q.print();
    cout<<"Size of Queue: "<<q.getSize()<<endl;
    cout<<"Queue is empty or not: "<<q.isEmpty()<<endl;

    q.push(100); //overflow
    q.print();
    q.pop();
    q.pop();
    q.pop();
    q.print();
    cout<<"Front: "<<q.getFront()<<endl;
    cout<<"Rear: "<<q.getrear()<<endl;
    q.pop();
    q.print();
    cout<<"size: "<<q.getSize()<<endl;


return 0;
}