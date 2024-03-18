#include<iostream>
using namespace std;
int main(){
    int a=1;
    int b=a++;
    int c=++a;
    cout<< b <<"\n"; //1
    cout<< c; //3
}