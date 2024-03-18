#include<iostream>
using namespace std;

int searchnearlysorted(int arr[],int n,int target){
    int s=0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while (s <= e){
        // mid-1 should be greater than 0
        if(mid-1 >=0 && arr[mid-1] == target){
            return mid-1;
        }
        else if(arr[mid] == target) {
            return mid;
        }
        // mid+1 se array se bhar na nikl jao
        else if(mid+1 < n && arr[mid+1] == target){
            return mid+1;
        }
        else if(target > arr[mid]){
            // right m jao
            s = mid+2;
        }
        else{
            // left m jao
            e  = mid-2;
        }
        
    }
    return -1;
}

int main(){
    int arr[]={20,10,30,50,40,70,60};
    int n=7;
    int target = 60;
    int targetIndex = searchnearlysorted(arr,n,target);

    if(targetIndex == -1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found at index: "<<targetIndex<<endl;
    }
    return 0;
}