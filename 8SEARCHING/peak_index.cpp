// PEAK INDEX IN A MOUNTAIN ARRAY
#include<iostream>
using namespace std;

int peakIndex(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s < e){
        if(arr[mid] < arr[mid+1]){
            // A wali line pe hu
            // peak right me exist krti h
            s = mid + 1;
        }
        else{
            // yaa toh main B line pr hu
            // ya toh main peak element pr hu
            e = mid; 
        }
        // mid update
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    int arr[5]={10,20,50,40,30};
    int n=5;
    cout<<peakIndex(arr,n);
return 0;
}