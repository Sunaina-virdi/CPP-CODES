#include<iostream>
using namespace std;

class A{
    public:
    void sayhello(){
        cout<<"hello love babbar"<<endl;
    }
    void sayhello(string name){
        cout<<"hello"<<name<<endl;
    }
};

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }
    void operator+ (B &obj){   
        int value1 = this -> a;
        int value2 = obj.a;
        cout<<"output   "<<value2 - value1 <<endl;
    }
    /* void operator() (){
        cout<<"main bracket hu" << this->a <<endl;
    }
    */
};

// run-time
// class animal{
//     public:
//     void speak(){
//         cout<<"speaking "<<endl;
//     }
// };
// class dog: public animal{
//     public:
//     void speak(){
//         cout<<"barking"<<endl;
//     }
// };

int main(){

    A obj;
    obj.sayhello();
    obj.sayhello();
    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2; 
    // obj();


    // dog obj;
    // obj.speak();
return 0;
}