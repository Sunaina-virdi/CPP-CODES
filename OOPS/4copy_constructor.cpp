#include<iostream>
using namespace std;
class hero{

// properties
    private:
    int health;
    public:
    char level;

// default constructor without parameter
    hero(){
        cout<<"constructor called"<<endl;
    }

// paramerterised constructor(this keyword is used to store address of currect object)
    hero(int health){
    cout<<"this is ->"<<this<<endl;
    this -> health = health;
}
    hero(int health,char level){
    this -> level = level;
    this -> health = health;
}

// copy constructor
hero(hero& temp){
    cout<<"copy constructor called "<<endl;
    this->health =temp.health;
    this->level=temp.level;
}
~hero(){
    cout<<"destructor called"<<endl;
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


};
int main(){

    hero s(70,'C');
    s.print();

// copy constructor
    hero r(s);
    r.print();
    return 0;
}
