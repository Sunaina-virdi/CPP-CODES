#include<iostream>
using namespace std;

int binarysearch(int arr[],int s,int e,int target){
    // base case
    if(s > e){
        // element not found
        return -1; 
    }
    // processing -> 1 case khud solve kro
    int mid = s+(e-s)/2;
    if(arr[mid] == target){
        return mid;
    }
    // baaki recursion sambhal lega
    if(arr[mid] < target){
        // right m jao
        s = mid+1;
        return binarysearch(arr,s,e,target);
        
    }
    else{
        // left m jao
        e = mid-1;
        return binarysearch(arr,s,e,target);

    }

    
}
int main(){
    int arr[]={10,20,30,50,60,70,80};
    int size=7;
    int s=0;
    int e=size-1;
    int target=5;


    int foundIndex = binarysearch(arr,s,e,target);

    if(foundIndex != -1){
        cout<<"target Index at: "<<foundIndex<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }

return 0;
}