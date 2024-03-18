#include<iostream>
using namespace std;

void printcounting(int n){  //function defining
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    printcounting(n);   //function calling
return 0;
}