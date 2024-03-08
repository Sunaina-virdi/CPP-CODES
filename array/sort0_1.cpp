#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortZeroOne(int arr[],int n){
    int Zerocount=0;
    int Onecount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            Zerocount++;
        }
        if(arr[i]==1){
            Onecount++;
        }
    }
    int i;
    for(i=0;i<Zerocount;i++){
        arr[i]=0;
    }
    for(int j=i;j<n;j++){
        arr[j]=1;
    }
}
int main(){
    int n=9;
    int arr[9]={0,1,0,1,1,0,0,0,0};
    // alternative method -->>sort(arr,arr+n);

    sortZeroOne(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


return 0;
}