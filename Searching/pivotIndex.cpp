#include<iostream>
using namespace std;

int findpivotindex(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(start==end){
            return start;
        }
        else if(arr[mid]<arr[mid-1]){
            return mid-1;
        }
        else if(arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[start]>arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[8]={12,14,16,18,4,6,8,10};
    int n=8;
    cout<<findpivotindex(arr,n)<<endl;
return 0;
}