/* 
ENCAPSULATION:
The process of grouping data members and corresponding methods into a single unit is known as Encapsulation. 
It is an important part of object-oriented programming. 
We can create a fully encapsulated class by making all the data members private. 
If the data members are private, it can only be accessible within the class
no other class can access that class’s data members. 

ADVANTAGES:
1) Encapsulation is a way to achieve data hiding because other classes will not be able to access the data through the private data members.
2) In Encapsulation, we can hide the data’s internal information, which is better for security concerns.
3) By encapsulation, we can make the class read-only. The code reusability is also an advantage of encapsulation.
4) Encapsulated code is better for unit testing.
*/ 

#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age;
    int height;

    public:
    int getage(){
        return this->age;
    }
};


int main(){
    student first;
    cout<<"sab sahi chal rha h "<<endl;

return 0;
}