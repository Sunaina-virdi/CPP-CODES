// LEET CODE 
// QUES NO 632

#include<bits/stdc++.h>
using namespace std;

class info{
    public:
    int data;
    int colIndex;
    int rowIndex;
    info(int a,int b,int c){
        this->data = a;
        this->rowIndex = b;
        this->colIndex = c;
    }
};

class compare{
    public:
    bool operator()(info*a, info*b){
        return a->data > b->data;
    }
};

class Solution{
    public:
    vector<int> smallestRange(vector<vector<int>>& nums){
        priority_queue<info* ,vector<info*>,compare>pq;
        int maxi = INT_MIN;
        int mini = INT_MAX;

        // process first k element ko
        for(int i=0;i<nums.size();i++){
            int element = nums[i][0];
            int row = i;
            int col = 0;
            info* temp = new info(element,row,col);
            pq.push(temp);
            maxi = max(maxi,element);
            mini = min(mini,element);
        }
        int ansStart = mini;
        int ansEnd = maxi;

        while(!pq.empty()){
            info* topNode = pq.top();
            int topData = topNode->data;
            int topCol = topNode->colIndex;
            int topRow = topNode->rowIndex;

            // pop
            pq.pop();

            mini = topNode->data;
            // maxi ki value phle se padi hui h
            // compare krlete h for smaller range
            if((maxi - mini) < (ansEnd -  ansStart)){
                // update ans
                ansStart = mini;
                ansEnd = maxi;
            }

            // insertion wala step
            if(topCol + 1 < nums[topRow].size()){
                int newElement = nums[topRow][topCol+1];
                maxi = max(maxi,newElement);
                info* newinfo = new info(newElement,topRow,topCol+1);
                pq.push(newinfo);
            }
            else{
                // agge koi elment nhi h push krne kp
                break;
            }
        }
        vector<int>ans;
        ans.push_back(ansStart);
        ans.push_back(ansEnd);
        return ans;
    }
};

