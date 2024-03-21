/* access modifers
    public -->>access within class or outside the class
    private -->>access only within class
    protected
*/
// by default -->>private 
// getter -->> fetch
// setter -->>set value or apply conditions

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

    // creation of object
    hero ramesh;
    cout<<"ramesh health is: "<<ramesh.gethealth()<<endl;

    // use setter
    ramesh.sethealth(70);

    // ramesh.health = 70;
    ramesh.level = 'A';

    cout<<"health is: "<<ramesh.gethealth()<<endl;
    cout<<"level is: "<<ramesh.level<<endl;
 
return 0;
}