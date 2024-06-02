// LEETCODE 509

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// top-down approach
// rec + memoisation approach
int solveUsingMemo(int n,vector<int>&dp){
    // base case
    if(n == 0 || n== 1 ){
        return n;
    }

    // step3: if ans already exists then return ans;
    if(dp[n] != -1){
        return dp[n];
    }

    // rec relation
    // step2: store and return using dp array
    dp[n] = solveUsingMemo(n-1,dp)+solveUsingMemo(n-2,dp);
    return dp[n];

}


// BOTTOM-UP APPROACH
// TABULATION METHOD
int solveUsingTabulation(int n){
    // step1 : create dp array
    vector<int>dp(n+1,-1);

    // step 2: analyse base case and fill dp array
    dp[0] = 0;
    if(n==0){
        return dp[0];
    }
    dp[1] = 1;

    // step 3: fill the remaining dp array
    // size = n + 1;
    // index is from 0 to n 
    // index fill no chuka hai -> 0 and 1
    // bacha konsa index = 2->n 
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
        // yaha recursive call nhi krni usse dp m change krna h 
    }

    // ans return
    return dp[n];


}
int main(){
    //Step1: create dp array
    int n;
    cin>>n; 
    // vector<int>dp(n+1, -1);
    // int ans = solveUsingMemo(n,dp);
    int ans = solveUsingTabulation(n);
    return ans;
    // for(auto i:dp){
    //     cout<<i<<" ";
    // }
    // return ans;

return 0;
}