#include<iostream>
using namespace std;
int main(){
    int a=3;//global declaration
    cout<<a<<endl;

    if(true){
        int a=5; //self declaration
        cout<<a<<endl;
    }
    cout<<a<<endl;

    int b=8;
    cout<<b<<endl;
    for(int i=0;i<8;i++){
        cout<<" HI "<<endl;
    }
    if(1){
        int b;
        if(1){
            int b;
            if(1){
                int b;
            }
        }
    }
}