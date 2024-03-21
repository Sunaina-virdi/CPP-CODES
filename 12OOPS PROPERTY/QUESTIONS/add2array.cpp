#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int brr[n];
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    
    int crr[n];
    for(int i=0;i<n;i++){
        crr[i]=arr[i]+brr[i];
    }
    for(int i=0;i<n;i++){
        cout<<crr[i]<<" ";
    }
return 0;
}