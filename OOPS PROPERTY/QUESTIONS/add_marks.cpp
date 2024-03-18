#include<iostream>
using namespace std;

class marks{
    public:
    int int_marks;
    int ext_marks;
    public:
    // default constructors
    marks(){
        int_marks = 0;
        ext_marks = 0;
    }
    // parametrized constructors
    marks(int im,int em){
        int_marks = im;
        ext_marks = em;
    }

    void disp(){
        cout<<int_marks<<endl<<ext_marks<<endl;
    }

    // operator overloading
    marks operator+(marks m){
        marks temp;
        temp.int_marks = int_marks + m.int_marks;
        temp.ext_marks = ext_marks + m.ext_marks;
        return temp;
    }

};

int main(){
    marks m1,m2;

    cin>>m1.int_marks>>m1.ext_marks;
    cin>>m2.int_marks>>m2.ext_marks;

    marks m3 = m1 + m2;
    m3.disp();

return 0;
}