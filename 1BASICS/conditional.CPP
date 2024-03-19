#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"value of a and b "<<a<<" "<<b<<endl;

    if(a>0){
        cout<<"A is positive"<< endl;
    }
    else if(a<0){
        cout<<"A is negative"<<endl;
    }
    else{
        cout<<"A is zero"<<endl;
    }
}