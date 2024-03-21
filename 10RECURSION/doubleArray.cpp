#include<iostream>
using namespace std;

void doublearr(int arr[],int size,int index){
    // base case
    if(index >= size){
        return ;
    }
    // processing
    arr[index] = 2*arr[index];

    // recursive call
    doublearr(arr,size,index+1);
}

int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    doublearr(arr,size,index);

    // printing
    for (int i=0;i<size;i++) {
    	cout << arr[i] << " ";
    }  
return 0;
}