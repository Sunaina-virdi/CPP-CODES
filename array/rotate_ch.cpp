#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void str(char ch[] , int n , int k)
{
    k%=n;
    reverse(ch , ch + n);
    reverse(ch , ch + k);
    reverse(ch + k , ch + n);
}

int main(){

    char ch [1000];
    cin.getline(ch,1000);

    int k;
    cin>>k;

    str(ch , strlen(ch) , k);
    cout<<ch;
return 0;
}