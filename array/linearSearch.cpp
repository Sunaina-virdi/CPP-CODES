#include<iostream>
using namespace std;

bool linear(int arr[],int target,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[5]={2,3,9,3,6};
    int target=2;

    bool ans = linear(arr,target,5);

    if(ans==1){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}