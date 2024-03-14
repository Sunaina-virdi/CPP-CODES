#include<iostream>
using namespace std;

int getQuotient(int divisor,int dividend){
    int s=0;
    int e=dividend;
    int ans = -1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid*divisor == dividend ){
            return mid;
        }
        else if (mid * divisor < dividend) {
            // store ans
            ans =mid;
            // right
            s = mid + 1 ;
        }
        else{
            // left
            e = mid - 1 ;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}

int main(){
    int divisor= 7;
    int dividend=29;
    int ans = getQuotient(divisor,dividend);
    cout<<"Final Ans is: "<<ans<<endl;
return 0;
}