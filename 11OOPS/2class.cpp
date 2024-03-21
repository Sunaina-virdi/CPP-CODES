// CLASS IS USER DEFINED DATATYPE
// OBJECT IS INSTANCE OF CLASS
// IN CASE OF EMPTY CLASS IT WILL RETURN 1 BYTE MEMORY
#include<iostream>
using namespace std;

class hero{
    // properties
    int health;
};  
int main(){
    //  creation of object
    hero h1;
    cout << "size: "<< sizeof(h1) << endl;

return 0;
}