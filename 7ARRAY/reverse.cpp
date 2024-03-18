#include<iostream>
using namespace std;
/*another method
for(int left=0; right=size-1; left<=right; left++; right--){
    swap(arr[left],arr[right];
*/

int reverse(int arr[],int n){
    int start=0;
    int end = n-1;
    while(start<end){
        swap(arr[start++],arr[end--]);
    }
}
int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 
int main(){
    int arr[8];
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    reverse(arr,8);
    print(arr,8);
return 0;
}