// TIME COMPLEXITY -> O(n/2+1) -> O(n)
// SPACE COMPLEXITY -> O(n/2+1) -> O(n)

#include<iostream>
using namespace std;

bool IsPalindrome(string s,int start,int end ){
    //base case
    if(start >= end){
        return true;
    }
    // ek case sol
    if(s[start] != s[end]){
        return false;
    }
    return IsPalindrome(s,start+1,end-1);
}

int main(){
    string s;
    cin>>s;
    cout<<IsPalindrome(s,0,s.size()-1)<<endl;
return 0;
}