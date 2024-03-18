#include<iostream>
#include<limits.h>
using namespace std;
// to print row wise sum
void rowsum(int arr[3][4],int i,int j){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum = sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int largestRowSum(int arr[3][4], int i ,int j){
    int max = INT_MAX;
    int rowIndex = -1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum = sum+arr[i][j];

        }
        if (sum>max){
            max=sum;
            rowIndex = i;
        }
    }
    cout<<"the maximum sum is"<<max<<endl;
    return i;
}
int main(){
    int arr[3][4];
    // input
    cout<<"enter the elements"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    // print
    cout<<"printing the array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rowsum(arr,3,4);
    cout<<"max row is at index"<<largestRowSum(arr,3,3)<<endl;


return 0;
}