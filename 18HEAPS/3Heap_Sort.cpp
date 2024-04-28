//  HEAP SORT
// 25 20 15 5 10 12
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
};
    void heapify(int *arr,int n,int index){
        int leftIndex = 2*index;
        int rightIndex = 2*index+1;
        int largestKaIndex = index;

        // teno m se max leo
        if(leftIndex <= n && arr[leftIndex] > arr[largestKaIndex]){
            largestKaIndex =  leftIndex;
        }
        if(rightIndex <= n && arr[rightIndex] > arr[largestKaIndex]){
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

    void heapSort(int arr[],int n){
        while(n != 1){
            swap(arr[1],arr[n]); //swap the first and last element (1-based indexing h so last element arr[n])
            n--;  //decrease size of arr
            heapify(arr,n,1); //first element ko heapify kiya
        }
    }



int main(){

    int arr[] = {5,10,15,20,25,12};
    int n =6;
    buildHeap(arr,6);
    cout<<"printing heap: "<<endl;
    for(int i=1;i<=6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr,n);
    cout<<"printing heap: "<<endl;
    for(int i=1;i<=6;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}