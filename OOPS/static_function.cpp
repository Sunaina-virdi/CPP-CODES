/*static function -- object create ki need nhi ha
  this keyword -- pointer to current object
  static function static members ko hi access kar skte ha
*/
// data memory -- initialise -- datatype classname:: fieldname = value;
#include <iostream>
#include <string.h>
using namespace std;
class hero
{

    // properties
private:
    int health;

public:
    char *name;
    char level;
    static int timetocomplete;

    // default constructor without parameter
    hero()
    {
        cout << "constructor called" << endl;
        name = new char[100];
    }

    // paramerterised constructor(this keyword is used to store address of currect object)
    hero(int health)
    {
        cout << "this is ->" << this << endl;
        this->health = health;
    }
    hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor
    hero(hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];  
        strcpy(ch,temp.name);
        this->name = ch;
        cout << "copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    // ~hero()
    // {
    //     cout << "destructor called" << endl;
    // }

    void print()
    {
        cout << endl;
        cout << "[name: " << this->name << " , ";
        cout << "health is: " << this->health << " , ";
        cout << "health is: " << this->level << "]";
        cout << endl;
    }

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }

    void setname(char name[])
    {
        strcpy(this->name, name);
    }

    static int random(){
        return timetocomplete;
    }
    // destructor
    ~hero(){
        cout<<"destructor called"<<endl;
    }

};
int hero:: timetocomplete = 5;
int main()
{

    cout<< hero:: random()<<endl;
    // cout<<hero::timetocomplete << endl;

    // hero a;
    // cout<<a.timetocomplete <<endl;

    // hero b;
    // b.timetocomplete = 10;
    // cout<<a.timetocomplete <<endl;
    // cout<<b.timetocomplete <<endl;

    
    return 0;
}
