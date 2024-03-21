#include<iostream>
using namespace std;

class length{
    public:
    double value;

    // default
    length(){
        value = 0;
    }
    // para
    length(double v){
        value = v;
    }
    // operator 
    operator double(){
        return value/2.54;
    }
};
int main(){
    length l1,l2;
    cin>>l1.value;
    cin>>l2.value;

    cout<<"length 1 in inches: "<<static_cast<double>(l1)<<endl;
    cout<<"length 1 in inches: "<<static_cast<double>(l2)<<endl;


return 0;
}