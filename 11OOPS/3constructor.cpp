// CONSTRUCTOR
// OBJECT CREATION 
// NO RETURN TYPE
// NO INPUT PARAMETER
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
        
        cout<<"constructor called"<<endl;
    }

// paramerterised constructor(this-->> keyword is used to store address of currect object)
    hero(int health){
    cout<<"this is ->"<<this<<endl;
    this -> health = health;
}
    hero(int health,char level){
    this -> level = level;
    this -> health = health;
}
    void print(){
        cout<<level<<endl;
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

    // object created statically
    // cout<<"hi"<<endl;
    hero ramesh(10); 
    // cout<<"hello"<<endl;
    cout<<"address of ramesh"<<&ramesh<<endl;
    // ramesh.gethealth();
     

    // dynamically
    hero *h = new hero(11);



return 0;
}