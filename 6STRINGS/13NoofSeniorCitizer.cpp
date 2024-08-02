// LEETCODE 2678
// NO OF SENIOR CITIZEN
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i=0;i<details.size();i++){
            string nums = details[i];
            string agestr = nums.substr(11,2);

            int age = stoi(agestr);
            if(age > 60){
                count++;
            }
        }
        return count;
    }
};