// relational operators = > < >= <= != 
// logical operators && || !
#include<iostream>
using namespace std;
int main(){
    int a= 2.0/5;
    cout << a << endl;
    cout << 2.0/5 << endl;
    float b= 2.0/5; 
    cout << b << endl;
    cout << 2.0/5 << endl;
    double c= 2.0/5;
    cout << c << endl;
    cout << 2.0/5 << endl;

    int x=2;
    int y=3;

    bool first = (x==y);
    cout << first << endl;
    bool second = (x>y);
    cout << second << endl;
    bool third = (x<y);
    cout << third << endl;
    bool fourth = (x>=y);
    cout << fourth << endl;
    bool fifth = (x<=y);
    cout << fifth << endl;
    bool sixth = (x!=y);
    cout << sixth << endl; 
}
