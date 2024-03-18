// A B C
// A B C
// A B C
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A';
        while(j<=n){
            cout<<ch<<" "; //'A'+j-1
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}