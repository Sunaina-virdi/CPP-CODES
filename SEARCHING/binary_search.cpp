#include<iostream>
using namespace std;

int binary(int arr[],int target,int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;

    while(start<=end){   //start <= end bcz we want to include to the last index 
        // found
        if(arr[mid] == target){
            // return index of the found element
            return mid;
        }
        else if(target > arr[mid]){
            // right m jao
            start = mid + 1;
        }
        else if(target < arr[mid]){
            // left m jao
            end = mid - 1;
        }
        // mid ko update kro
        mid = (start+end)/2;
    }
    // agar yaha tak pohoche ho
    // iska matlab element not found
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target=90;
    int n=9;

    int ansIndex = binary(arr,target,n);

    if(ansIndex==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found: "<<ansIndex<<endl;
    }
return 0;
}   