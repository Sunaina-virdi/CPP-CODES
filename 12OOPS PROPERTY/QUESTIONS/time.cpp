#include<iostream>
using namespace std;

class time{
    public:
    int hour;
    int minute;
    int sec;

    time(){
        hour = 0;
        minute = 0;
        sec = 0;
    }

    time(int h,int m,int s){
        hour = h;
        minute = m;
        sec = s;
    }

    time operator+(time other){
        time temp;
        temp.sec = sec + other.sec;
        temp.minute = minute +other.minute + (temp.sec/60);
        temp.hour = hour + other.hour +(temp.minute / 60);

        temp.sec %= 60;
        temp.minute %= 60; 
        temp.hour %= 24;

        return temp;
    } 
    void display(){
        cout<<"hr"<<hour<<"minute"<<minute<<"second"<<sec<<endl;
    }
};
int main(){
    time t1,t2,t3;
    
    cin>>t1.hour>>t2.minute>>t3.sec;
    cin>>t2.hour>>t2.minute>>t3.sec;

    t3 = t1+t2;
    t3.display();

return 0;
}