// leetcode 917
#include<iostream>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start = 0;
        int end = s.length()-1;
        while(start<end){
            if(isalpha(s[start]) && isalpha(s[end])){
            swap(s[start],s[end]);
            start++;
            end--;
            }
            else if(!isalpha(s[start])){
                start++;
            }
            else{
                // s[end] -> not alpha
                end--;
            }
        }
        
        return s;
    }
};