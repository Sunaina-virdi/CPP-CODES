#include<iostream>
using namespace std;

class fraction{
    public:
    int num;
    int dem;

    // default
    fraction(){
        num = 0;
        dem = 0;
    }
    // para
    fraction(int n,int d){
        num = n;
        dem = d;
    }
    // operator
    fraction operator+(fraction other){
        
        int result_num = num * other.dem + other.num * dem;
        int result_dem = dem * other.dem;
        return fraction(result_num,result_dem); 
    }
    fraction operator-(fraction other){
        int result_num = num * other.dem - dem * other.num;
        int result_dem = dem * other.dem;
        return fraction(result_num,result_dem); 
    }
    

};
int main(){

    fraction f1,f2,f3,f4;
    cin>>f1.num>>f1.dem;
    cin>>f2.num>>f2.dem;
    cin>>f3.num>>f3.dem;
    cin>>f4.num>>f4.dem;

    fraction result1 = f1 + f2;
    fraction result2 = f3 - f4;

    
    cout << "Addition: " << result1.num<< "/" << result1.dem << endl; // Should output 7/12
    cout << "Subtraction: " << result2.num << "/" << result2.dem<< endl; // Should output 1/35


return 0;
}