/*class (namechild): (mode) (parentclass)

ACCESS MODIFIERS
public    public      public
public    private     private
public    protected   protected

protected   public      protected
protected   private     private
protected   protected   protected

private   public      not accessible
private   private     not accessible
private   protected   not accessible 
private data member of any class cannot be inherited

*/

#include<iostream>
using namespace std;

class human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getage(){
        return this->age;
    }
    int setweight(int w){ 
        this->weight = w;
    }

};

class male: public human{

    public:
    string color;
    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};

int main(){

    male m1;
    cout<<m1.height<<endl;

    male object1;
    cout<<object1.age<<endl; 
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;
    object1.sleep();
    object1.setweight(84);
    cout<<object1.weight<<endl;
return 0;
}