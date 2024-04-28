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

    void insert(int val){
        if(size == capacity){
            cout<<"Heap Overflow"<<endl;
            return;
        }
        // size increase kar jaega
        size++;
        // insert at last
        int index = size;
        arr[index]=val;
        
        // take the value to its correct position
        while(index > 1){
            int parentIndex = index/2;
            if(arr[parentIndex]<arr[index]){
                swap(arr[parentIndex],arr[index]);
                index = parentIndex;
            }
            else{
                return;
            }
        }
    }
    void printHeap(){
        for(int i=1; i<=size; i++){
        cout << arr[i] << " ";
    }
    }

    int deleteFromHeap(){
        int ans = arr[1];
        // replacement
        arr[1]= arr[size];
        // last element ko delete uski original position se
        size--;

        int index = 1;
        while(index < size){
            int leftIndex = 2*index;
            int rightIndex = 2*index + 1;

            // find out karna h , sabse bada kon 
            int largestKaIndex = index;
            // check left child
            if(leftIndex <= size && arr[largestKaIndex] < arr[leftIndex]){
                largestKaIndex = leftIndex;
            }
            if(rightIndex <= size && arr[largestKaIndex] < arr[rightIndex]){
                largestKaIndex = rightIndex;
            }


            // no change
            if(index == largestKaIndex){
                break;
            }
            else{
                swap(arr[index],arr[largestKaIndex]);
                index = largestKaIndex; //update index
            }
        }
        return ans;
    }
};

int main(){

    Heap h(20);
    // insertion
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);

    cout<<"Printing the content of heap: "<<endl;
    h.printHeap();
    int ans = h.deleteFromHeap();
    cout<<"Answer: "<<ans<<endl;

    h.printHeap();
return 0;
}