#include<iostream>
using namespace std;
// to print row wise sum
void rowsum(int arr[3][4],int r,int c){
        for(int i=0;i<3;i++){
            int sum = 0;
            for(int j=0;j<4;j++){
                sum = sum + arr[i][j];
            }
            cout<<sum<<" ";
        }
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
    //print
    cout<<"printing the array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rowsum(arr,3,4);

    

return 0;
}