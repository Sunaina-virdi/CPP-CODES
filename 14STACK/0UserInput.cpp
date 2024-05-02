#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
        st.push(arr[i]);
    }
    cout<<"\nEnter element are"<<endl;
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
return 0;
}