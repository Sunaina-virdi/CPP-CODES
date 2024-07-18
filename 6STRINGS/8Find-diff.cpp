// leetcode 389
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        // assume that string s length is mini
        int min_len = s.length();

        for(int i=0;i<min_len;i++){
            if(s[i] != t[i]){
                return t[i];
            }
        }

        // hume koi ans nhi mila esss ly last wala hi char hi humara ans h 
        // ess ly last index return kr do
        return t[t.length()-1];
    }
};