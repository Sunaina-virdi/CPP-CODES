#include<iostream>
#include<algorithm>
using namespace std;

void rotateArray(int arr[],int n,int k){
    k=k%n;
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
}


int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n = 7;
    int k;
    cin>>k;
    rotateArray(arr,n,k);

    cout<<"rotated array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}