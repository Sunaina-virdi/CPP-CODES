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
};
int main()
{

    hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7] = "Babbar";
    hero1.setname(name);
    // hero1.print();

    hero hero2(hero1);
    // hero2.print();

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();

    hero1 = hero2;

    hero1.print();

    hero2.print();

    /*
    hero1.print();

    hero s(70, 'C');
    s.print();

    // copy constructor
    hero r(s);
    r.print();
    */
    return 0;
}
