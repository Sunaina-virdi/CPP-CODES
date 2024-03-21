/*
polymorphism -->> many forms

two types
1) compile time polymorphism(static polymorphism)
    -->>function overloading
        ->when there are multiple functions in a class with the same name but different parameters, these functions are overloaded.
        ->main advantage of function overloading is it increases the readability of the program
        ->functions can be overloaded by using different number of argument and by using different types of argument
    -->>operator overloading
        ->you can use + operator as subtract 
2) run-time polymorphism(dyanamic polymorphism)
    -->>method overriding
    rules::
    1)the method of the parent class and the method of the child class must have the same name.
    2)the method of the parent class and the method of the child class must have the same parameters
    3)it is possible through inheritance only
*/
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
class animal{
    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};
class dog: public animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main(){

    // A obj;
    // obj.sayhello();

    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2; 
    // obj();


    dog obj;
    obj.speak();
return 0;
}