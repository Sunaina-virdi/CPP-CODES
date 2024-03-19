#include<iostream>
using namespace std;
int main(){
    int a = 123;
    cout << a << endl;
    char b= 'v';  //only single char is allowed
    cout << b << endl;
    bool bl=true;
    cout << bl << endl;
    float f=1.2;
    cout << f <<endl;
    double d=1.23;
    cout << d <<endl; 

    // size of variable
    int size = sizeof(a);
    cout << "size of a is: "<< size << endl;
    int size2 = sizeof(d);
    cout << "size of d is: "<< size2 << endl;

    char ch=98;
    cout << ch <<endl;  

    unsigned int s = 112;
    cout << s << endl;
}