#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int solve(vector<int>& coins,int amount){
    // base case
    if(amount == 0){
        return 0;
    }
    int mini = INT_MAX;
    int ans =  INT_MAX;
    for(int i=0;i<coins.size();i++){
        int coin = coins[i];

        // current coin ko sir tabhi use krenge jab uski value <= amount hogi
        if(coin <= amount){
            int recAns = solve(coins,amount - coin);
            if(recAns != INT_MAX){
                ans = 1 + recAns;
            }
        }
        mini = min(mini,ans);
    } 
    return mini;
}
int coinchoose(vector<int>& coins,int amount){
    int ans = solve(coins,amount);
    if(ans == INT_MAX){
        return -1;
    }
}

int main(){


return 0;
}