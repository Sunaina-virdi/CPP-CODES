#include<iostream>
using namespace std;

class marks{
    int int_mark;
    int ext_mark; 
    
    public:
    marks(){                                        
        int_mark = 0;
        ext_mark = 0;
    }
    marks(int im,int em){
        int_mark = im;
        ext_mark = em;
    }
    
    void disp(){
        cout<<int_mark<<endl<<ext_mark<<endl;
    }

    marks operator-(marks m){
        marks total;
        total.int_mark = int_mark - m.int_mark;
        total.ext_mark = ext_mark - m.ext_mark;
        return total;
    }
};
int main(){
    marks m1(80,90),m2(30,40);
    marks m3 = m1 - m2;
    m3.disp();

return 0;
}