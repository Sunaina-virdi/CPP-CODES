#include<iostream>
#include<vector>
using namespace std;

void printSubarray_until(vector<int>&nums,int start,int end){
    // base case
    if(end == nums.size()){
        return;
    }
    // 1 case sol.
    for(int i=start;i<=end;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    // RE
    printSubarray_until(nums,start,end+1);
}
void printSubarry(vector<int>&nums){
    for(int start=0;start<nums.size();start++){
        int end = start;
        printSubarray_until(nums,start,end);
    }
}
int main(){
    vector<int>nums{1,2,3,4,5};
    printSubarry(nums);
return 0;
}