// check whether prime or not prime
#include<iostream>
using namespace std;
// 1 ->prime
// 0 ->not prime
bool Isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;            
}
int main(){
    int n;
    cin>>n;
    if (Isprime(n)){
        cout<< "is a prime no"<<endl;
    }
    else{
        cout<<"not a prime no."<<endl;
    }
return 0;
}