#include<iostream>
#include<limits.h>
using namespace std;
// first method
int min_num(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
// second method
// void min_num(int arr[],int n){
//     int min=INT_MAX;
//     for(int i=0;i<n;i++){
//         min=min(arr[i],min)
//         }  
//     }

int main(){
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    int minimum = min_num(arr,7);
    cout<<"minimum number is: "<<minimum <<endl;
return 0;
}