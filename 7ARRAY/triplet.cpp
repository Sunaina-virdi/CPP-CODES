#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<4;k++){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }
        }
    }
return 0;
}