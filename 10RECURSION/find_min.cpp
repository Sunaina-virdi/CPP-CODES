// find min element in array 
/*
#include<iostream>
#include<limits.h>
using namespace std;

void findmin(int arr[],int size,int index,int &mini){
    // base case
    if(index >= size){
        return ; 
    }
    // processing
    mini=min(mini,arr[index]);

    // recursive call
    findmin(arr,size,index+1,mini);
}

int main(){
    int arr[]={50,20,90,50,10};
    int size=5;
    int index=0;
    int mini =INT_MAX;
    findmin(arr,size,index,mini);
    cout<<"minimum nmber in array: "<<mini<<endl;
return 0;
} */
#include<limits.h>
#include<iostream>
using namespace std;

void findmax(int arr[],int size,int index,int  &maxi) {
    // base case
    if(index >= size){
        return;
    }
    // processing
    maxi=max(maxi,arr[index]);
    // recursive call
    findmax(arr,size,index+1,maxi);

}

int main(){
    int arr[]={10,50,30,95,96};
    int size=5;
    int index=0;
    int maxi= INT_MIN;
    findmax(arr,size,index,maxi);
    cout<<"maximum number in the array is : "<<maxi<<endl;
return 0;
}