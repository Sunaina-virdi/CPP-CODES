#include<iostream>
#include<queue>
using namespace std;

class Cqueue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    Cqueue(int size){
        arr = new int[size];
        this->size = size;
        front = 1;
        rear = -1;
    }

    void push(int val){
        // overflow case
        if(front == 0 && rear == size-1){
            cout<<"Overflow"<<endl;
        }

        // empty case
        else if(front ==-1 && rear ==-1){
            front++;
            rear++;
            arr[rear]=val;
        }

        // circular case
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = val;
        }

        // normal case
        else{
            rear++;
            arr[rear]=val;
        }
    }

    void pop(){
        // underflow
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }

        // single element
        else if(front == rear){
            arr[front] = -1;
            front++;
        }

        // circular case
        else if(front == size-1){
            arr[front] = -1;
            front = 0;
        }

        // normal case
        else{
            arr[front] = -1;
            front++;
        }
    }
    void print(){
        cout<<"front: "<<front<<" rear: "<<rear<<endl;
        cout<<"Printing Queue: ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    Cqueue q(5);
    q.print();

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();
    q.push(60);
    // q.print();

return 0;
}