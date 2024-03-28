#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>nextSmallerElement(int *arr,int size,vector<int>ans){
    stack<int>st;
    st.push(-1); //right most element ka ans -1 hi hoga 

    for(int i=size-1;i>=0;i--) { //right se left ki traf move kr rhe h
        int curr = arr[i]; //apka jo curr element tha vo bhi kisi ka ans ho skta h 
        // answer find kro curr k ly
        while(st.top() >= curr){ //jab tak bda ya equal element mil rha h tab tak pop krte rho
            st.pop();
        }

        ans[i] = st.top(); //ans mil gya stack k top pe
        st.push(curr); //ess ly curr ko bhi push krdo
    }
    return ans;
}

int main(){
    int arr[5] = {8,4,6,2,3};
    int size = 5;
    vector<int>ans(size);
    
    ans = nextSmallerElement(arr,size,ans);
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
 

return 0;
}