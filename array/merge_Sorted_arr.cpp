#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,5,9,6,3};
    int brr[5]={5,2,3,9,9};
    sort(arr,arr+n);
    sort(brr,brr+n);
    int crr[5];
    for(int i=0;i<n;i++){
        crr[i]=arr[i]+brr[i];
    }
    for(int i=0;i<n;i++){
        cout<<crr[i]<<" ";
    }

return 0;
}