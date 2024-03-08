#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int uni=0;
    for(int i=0;i<n;i++){
        uni=uni^arr[i];
    }
    return uni;
}
int main(){
    int arr[9]={1,2,5,8,6,2,6,5,1};
    int n=9;
    int ans= unique(arr,n);
    cout<<ans;
return 0;
}