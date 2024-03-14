#include<iostream>
using namespace std;

int findoddOccuringElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        // single element
        if(s==e){
            return s;
        }
        // check mid -> even or odd
        else if(mid & 1){
            // mid&1 -> true -> oddnumber
            if(mid-1 >=0 && arr[mid-1] == arr[mid]){
                // right m jao
                s = mid+ 1;
            }
            else{
                // left m jao
                e = mid - 1;
            }
        }
        else{
            // even
            if(mid+1 <n && arr[mid] == arr[mid+1]){
                // right m jao
                s = mid + 2;
            }
            else{
                // ya toh m right part m khada hu ya toh m ans pe khada hu
                // that's why e=mid krra hu
                // kyuki e =mid -1; se ans lost ho skta h
                e = mid;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[]={7,10,10,20,20,30,30,50,50,60,60,70,70};
    int n=13;

    int ans = findoddOccuringElement(arr,n);
    cout<<"final ans: "<<arr[ans]<<endl;
return 0;
}