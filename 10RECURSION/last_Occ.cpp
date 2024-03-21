#include<iostream>
using namespace std;

void lastOccLTR(string&s,char target,int i,int&ans){
    // base case
    if(i >= s.size()){
        return;
    }
    // ek case solution
    if(s[i] == target){
        ans=i;
    }
    //
    lastOccLTR(s,target,i+1,ans);
}

int main(){
    string s;
    cin>>s;
    char target;
    cin>>target;
    int ans = -1;
    lastOccLTR(s,target,0,ans);
    cout<<ans<<endl;
return 0;
}


