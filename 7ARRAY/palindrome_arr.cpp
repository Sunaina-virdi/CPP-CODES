#include<iostream>
using namespace std;
bool palindrome(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        if(arr[start]==arr[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int arr[5];
    int n=5;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans = palindrome(arr,n);
    if(ans){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
return 0;
}