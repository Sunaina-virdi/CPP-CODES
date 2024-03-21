#include<iostream>
using namespace std;

bool searchArray(int arr[],int size,int target,int index){
    // base case
    if(index >= size){
        return false;
    }
    if(arr[index] == target){
        return true;
    }
    // recursive call
    bool aageKaAns = searchArray(arr,size,target,index+1);
    return aageKaAns;
}
int main(){
    int arr[]={10,20,30,50,90};
    int size=5;
    int target=60;
    int index=0;
    cout<<searchArray(arr,size,target,index);
return 0;
}