// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;

// template<typename T> // ess se hum yahi code int k ly bhi use kr skte h or char k ly bhi
// class graph{
//     public:
//     unordered_map <T,list<pair<T,T>>> adjList;

//     void addEdge(T u,T v,T wt,bool direction){
//         // direction = 0->undireected
//         // direction = 1->directed
//         if(direction == 1 ){
//             adjList[u].push_back({v,wt});
//         }
//         else{
//             adjList[u].push_back(make_pair(v,wt)); 
//             adjList[v].push_back({u,wt});
//         }
//         printAdjList();
//         cout<<endl;
//     }
//     void printAdjList(){
//         for(auto i:adjList){
//             cout<<i.first<<": { ";
//             for(pair<T,T> p: i.second){
//                 cout<<"{"<<p.first<<", "<<p.second<<"}, ";
//             }
//             cout<<"}"<<endl;
//         }
//     }
// };


// int main(){

//     graph<int> g;
//     g.addEdge(0,1,5,1);
//     g.addEdge(1,2,10,1);
//     g.addEdge(1,3,20,1);
//     g.addEdge(2,3,50,1);


// return 0;
// }


// FOR CHAR 

#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

template<typename T> // ess se hum yahi code int k ly bhi use kr skte h or char k ly bhi
class graph{
    public:
    unordered_map <T,list<pair<T,int>>> adjList;

    void addEdge(T u,T v,int wt,bool direction){
        // direction = 0->undireected
        // direction = 1->directed
        if(direction == 1 ){
            adjList[u].push_back({v,wt});
        }
        else{
            adjList[u].push_back(make_pair(v,wt)); 
            adjList[v].push_back({u,wt});
        }
        printAdjList();
        cout<<endl;
    }
    void printAdjList(){
        for(auto i:adjList){
            cout<<i.first<<": { ";
            for(pair<T,int> p: i.second){
                cout<<"{"<<p.first<<", "<<p.second<<"}, ";
            }
            cout<<"}"<<endl;
        }
    }
};


int main(){

    graph<char> g;
    g.addEdge('a','b',5,1);
    g.addEdge('b','c',10,1);
    g.addEdge('b','c',20,1);
    g.addEdge('c','d',50,1);

return 0;
}


