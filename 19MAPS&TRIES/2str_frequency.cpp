#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// O(n)
void countChar(unordered_map<char,int> &mapping, string str){
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        mapping[ch]++;
    } 
}

int main(){
    string str = "lovebabbar";
    unordered_map<char,int>mapping; //if i write map then it will give me ordered map as default  
    countChar(mapping,str);

    for(auto i:mapping){
        cout<< i.first<<" -> "<<i.second<<endl;
    }

return 0;
}