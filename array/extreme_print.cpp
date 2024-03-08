// i/p = 10 20 30 40 50 60
// o/p = 10 60 20 50 30 40

#include<iostream>
using namespace std;
int extremeprint(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(arr[start]==arr[end]){
            cout<<arr[start]<<endl;
        }
        else{
            cout<<arr[start]<<endl;
            cout<<arr[end]<<endl;
        }
        start++;
        end--; 
    }
}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    extremeprint(arr,n);
return 0;
}                
