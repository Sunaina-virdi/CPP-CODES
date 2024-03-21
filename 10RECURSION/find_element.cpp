#include<iostream>
using namespace std;

int findelement(int arr[],int size,int index,int target){
    //  base case
    if (index >= size){
        return -1;
    }
    // processing
    if(arr[index] == target){
        return index;
    }
    // recursive call
    findelement(arr,size,index+1,target);

}

int main(){   
    int arr[]={10,25,0,85,63,20};
    int size=6;
    int index=0;
    int target=63;
    // findelement(arr,size,index,target);
    cout<<"Element found at index: "<<findelement(arr,size,index,target)<<endl;
return 0;
}