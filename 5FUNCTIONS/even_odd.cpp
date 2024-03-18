// check whether num is even or odd
#include<iostream>
using namespace std;
// 1 -> Even
// 0 -> Odd
bool isEven(int num){
    if(num % 2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    cin >> num;
    bool ans = isEven(num);

    if (ans){
        cout<<"Number is Even"<<endl;
    }
    else{
        cout<<"Number is Odd"<<endl;
    }

return 0;
}