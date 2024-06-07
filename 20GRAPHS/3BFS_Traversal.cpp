// GRAPH TRAVERSAL
// 1. BFS
// 2. DFS  


// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<queue>
// using namespace std;

// template<typename T> // ess se hum yahi code int k ly bhi use kr skte h or char k ly bhi
// class graph{
//     public:
//     unordered_map <T,list<pair<T,int>>> adjList;

//     void addEdge(T u,T v,int wt,bool direction){
//         // direction = 0->undireected
//         // direction = 1->directed
//         if(direction == 1 ){
//             adjList[u].push_back({v,wt});
//         }
//         else{
//             adjList[u].push_back(make_pair(v,wt)); 
//             adjList[v].push_back({u,wt});
//         }
//         // printAdjList();
//         // cout<<endl;
//     }
//     void printAdjList(){
//         for(auto i:adjList){
//             cout<<i.first<<": { ";
//             for(pair<T,int> p: i.second){
//                 cout<<"{"<<p.first<<", "<<p.second<<"}, ";
//             }
//             cout<<"}"<<endl;
//         }
//     }

//     void bfsTraversal(T src){
//         // adjList  
//         // visited
//         unordered_map<T,bool>vis;
//         queue<T>q;

//         // initial state
//         q.push(src);
//         vis[src] = true;

//         while(!q.empty()){
//             T frontNode = q.front();
//             cout<<frontNode<<" ";
//             q.pop();

//             // go to neighbour
//             for(auto nbr: adjList[frontNode]){
//                 T nbrData = nbr.first;

//                 if(!vis[nbrData]){
//                     q.push(nbrData);
//                     vis[nbrData] = true;
//                 } 
//             }
//         }
//     }
// };

// int main(){

//     graph<char> g;
//     g.addEdge('a','b',5,0);
//     g.addEdge('a','c',10,0);
//     g.addEdge('b','c',20,0);
//     g.addEdge('c','d',50,0);
//     g.addEdge('c','e',50,0);
//     g.addEdge('e','f',50,0);    


//     g.bfsTraversal('a');

// return 0;
// }


// THIS IS IMP FOR ALL TEST CASES USE THIS CODE
// DISCONNECTED COMPONENT  // DISCONNECTED GRAPH  

#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
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
    }

    void bfsTraversal(T src,unordered_map<T,bool>& vis){
        // adjList  
        // visited
        queue<T>q;

        // initial state
        q.push(src);
        vis[src] = true;

        while(!q.empty()){
            T frontNode = q.front();
            cout<<frontNode<<" ";
            q.pop();

            // go to neighbour
            for(auto nbr: adjList[frontNode]){
                T nbrData = nbr.first;

                if(!vis[nbrData]){
                    q.push(nbrData);
                    vis[nbrData] = true;
                } 
            }
        }
    }
};


int main(){

    graph<char> g;   
    g.addEdge('a','b',5,0);
    g.addEdge('b','c',10,0);
    g.addEdge('d','e',20,0);
    g.addEdge('f','f',20,0);
    
    unordered_map<char,bool>vis;

    for(char node='a';node<='f';node++){
        if(!vis[node]){
            g.bfsTraversal(node,vis);
        }
    }  

return 0;
}

