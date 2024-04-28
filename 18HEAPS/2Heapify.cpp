#include<iostream>
using namespace std;

class Heap{
    public:
    int *arr; //dynamic array
    int capacity;
    int size;
    
    Heap(int capacity){
        this->arr = new int[capacity];
        this->capacity = capacity;
        // size = current no of element in heap
        size = 0;
    }
    void heapify(int *arr,int n,int index){
        int leftIndex = 2*index;
        int rightIndex = 2*index+1;
        int largestKaIndex = index;

        // teno m se max leo
        if(leftIndex <= n && arr[leftIndex] > arr[largestKaIndex]){
            largestKaIndex =  leftIndex;
        }
        if(rightIndex <= n && arr[rightIndex > arr[largestKaIndex]]){
            largestKaIndex = rightIndex;
        }
        // after these 2 condition largestkaIndex will be pointing towards largest element among 3
        if(index != largestKaIndex){
            swap(arr[index],arr[largestKaIndex]);
            // ab rec samabhal lega
            index = largestKaIndex;
            heapify(arr,n,index);

        }
    }
    void buildHeap(int arr[],int n){
        for(int index = n/2; index>0; index--){
            heapify(arr,n,index);
        }
    }
};

int main(){

}