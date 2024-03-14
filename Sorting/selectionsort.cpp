// selection sort
// i ko min man liya or baki sab ko compare krege or fir swap
#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i; //ith element hi smallest h
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){   //agr mujhe decresing order m krna h toh >(greater than size lgega)
                minindex = j;
            }
        }
        //2 step:  swap ith and minindex element
        swap(arr[i],arr[minindex]);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    print(arr,n);

return 0;
}