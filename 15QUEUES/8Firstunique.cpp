#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "ababc";
    queue<char>q;
    int freq[26] = {0};

    for(int i = 0;i < str.length();i++){
        // phle char nikl lo
        char ch = str[i];
        // freq update
        freq[ch-'a']++;
        // queue k andr push krdo taki track rkh pau ans ka
        q.push(ch);

        // answer find krne k ly
        while(!q.empty()){
            char frontCharacter = q.front();
            if(freq[frontCharacter-'a'] > 1){
                // mtlb yh ans nhi h
                q.pop();
            }
            else{
                // == 1 wala case
                // mtlb yahi ans h
                cout<<frontCharacter<<"->";
                break;
            }
        }
        if(q.empty()){
            // koi answer nhi nikla 
            cout<<"#"<<"->";
        }
    }

return 0;
}