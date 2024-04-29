#include<iostream>
#include<queue>
using namespace std;

int getKthSmallestElement(int arr[],int n,int k){
    priority_queue<int>pq;
    // first k element ko process kro
    for(int i=0;i<k;i++){
        int element = arr[i];
        pq.push(element);
    }
    // remaining element ko tabhi insert kro jab vo root se chota ho
    for(int i=k;i<n;i++){
        int element = arr[i];
        if(element < pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans = pq.top();
    return ans;
}


int main(){
    int arr[] = {3,5,4,2,9,8,7};
    int n=7;
    int k = 3;
    cout<<"3rd Smallest number is: "<<getKthSmallestElement(arr,n,k)<<endl;
return 0;
}