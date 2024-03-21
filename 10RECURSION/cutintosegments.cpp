#include<iostream>
#include<limits.h>
using namespace std;

int maximizeTheCuts(int n,int x,int y,int z)
{
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }

    // maine x len ka 1 segmentt cut krlia and baaki recursion dekhlega
    int option1 = 1 + maximizeTheCuts(n-x,x,y,z); 
    // maine y len ka 1 segmentt cut krlia and baaki recursion dekhlega
    int option2 = 1 + maximizeTheCuts(n-y,x,y,z);
    // maine z len ka 1 segmentt cut krlia and baaki recursion dekhlega
    int option3 = 1 + maximizeTheCuts(n-z,x,y,z);

    int finalAns = max(option1, max(option2,option3));
    return finalAns;
}

int main(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    cout<<maximizeTheCuts(n,x,y,z);

return 0;
}