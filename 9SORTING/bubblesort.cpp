//bubble sort
// swap the adjacent elements if needed till we get all the array sorted 
#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){   //arr[j]<arr[j+1] decreasing order
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={-50,14,23,20,-1};
    int n=5;
    bubblesort(arr,n);
    print(arr,n);
return 0;
} 