#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    // input array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    // print array
    cout<<"simple array"<<endl;
    for(int i=0;i<3;i++){
        cout<<endl;
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"sum of elements above diagonal"<<endl;
    int sum = 0;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            sum = sum+arr[i][j];
        }
    }
    cout<<sum<<endl;
return 0;
}