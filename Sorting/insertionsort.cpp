#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
    // i=0, chhod deta hu
    for (int i=0;i<n;i++){
        int key = arr[i];
        int j = i-1;


        // move element of arr[0...i-1] that are greater than
        // key to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key; //insertion
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={44,33,55,11,22};
    int n=5;
    insertionsort(arr,n);
return 0;
}   