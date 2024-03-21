#include<iostream>
using namespace std;

void findAllOcc(int arr[],int size,int index,int target){
    // base case
    if(index >= size){
        return ;
    }
    // processing
    if(arr[index]==target){
        cout<<index;
    }
    // recursive call
    findAllOcc(arr,size,index+1,target);
}

int main(){
    int arr[]={10,20,10,10,30,40};
    int size=6;
    int index=0;
    int target=10;
    findAllOcc(arr,size,index,target);
    cout<<"All Occ"<<index;
return 0;
}