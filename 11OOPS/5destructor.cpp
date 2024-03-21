// memory ko de-allocate karne k ly we use destructor
/*same name as class name
no return type
no input parameters*/

#include<iostream>
using namespace std;
class hero{

    // properties
    private:
    int health;
    public:
    char level;

// default constructor withour parameter
    hero(){
        cout<<"simple constructor called"<<endl;
    }

// paramerterised constructor(this keyword is used to store address of currect object)
    hero(int health){
    cout<<"this is ->"<<this<<endl;
    this -> health = health;
}


// copy constructor
hero(hero& temp){
    cout<<"copy constructor called "<<endl;
    this->health =temp.health;
    this->level=temp.level;
}
 

    void print(){
        cout<<"health is: "<<this->health<<endl;
        cout<<"health is: "<<this->level<<endl;
    }

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

    // void setname(char name[]){
    //     strcpy(this->name,name);
    // }

// destructor
    ~hero(){
        cout<<"destructor called"<<endl;
    }

};
int main(){

    // static
    hero a;   //(static allocation m destructor automatically call hota h)

    // dynamic
    hero *b = new hero();   //(dynamic allocation m destructor ko manually call karna pdhta h)
    // manually destructor call
    delete b;

return 0;
}