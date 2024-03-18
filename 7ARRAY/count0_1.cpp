#include<iostream>
using namespace std;
int main(){
    int arr[8] ={0,1,1,1,0,0,1,1};
    int zerocount=0;
    int onecount=0;
    for (int i = 0; i < 8; i++)
    {
        if(arr[i]==0){
            zerocount++;
        }
        else if(arr[i]==1){
            onecount++;
        }
    }

    cout<<"Zero count: "<<zerocount<<endl;
    cout<<"One count: "<<onecount<<endl;

return 0;
}