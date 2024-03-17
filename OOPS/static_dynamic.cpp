#include<iostream>
using namespace std;
class hero{

    // properties
    private:
    int health;
    public:
    char level;

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
    // static allocation
    hero a;
    a.sethealth(70);
    a.setlevel('B');
    cout<<"level of a is: "<<a.level<<endl;
    cout<<"health of a is: "<<a.gethealth()<<endl;

    // dynamically
    hero *b = new hero;
    b->sethealth(80);
    b->setlevel('A');
    cout<<"level of b is: "<<(*b).getlevel()<<endl;
    cout<<"health of b is: "<<(*b).gethealth()<<endl;

    cout<<"level of b is: "<<b->getlevel()<<endl;
    cout<<"health of b is: "<<b->gethealth()<<endl;
return 0;
}