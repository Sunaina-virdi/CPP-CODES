#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

template<typename T>
class graph{
    public:
    unordered_map<T,list<pair<T,int>>>adjList;

    void addEdge(T u ,T v,int wt,bool direction){
        if(direction == 1){
            adjList[u].push_back({v,wt});
        }
        else{
            adjList[u].push_back(make_pair(v,wt));
            adjList[v].push_back(make_pair(u,wt));
        }
    }

    void dfsTraversal(T src,unordered_map<T,bool> &vis){
        vis[src] = true;
        cout<<src<<" ";
        for(auto nbr: adjList[src]){
            T nbrData = nbr.first;
            if(!vis[nbrData]){
                dfsTraversal(nbrData,vis);
            }
        }
    }
};


int main(){

    graph<char> g;
    g.addEdge('a','b',5,0);
    g.addEdge('a','c',5,0);
    g.addEdge('c','d',5,0);
    g.addEdge('c','e',5,0);
    g.addEdge('d','e',5,0);
    g.addEdge('e','f',5,0);

    unordered_map<char,bool>visited;

    // disconnected component

    for(char node='a';node<='f';node++){
        if(!visited[node]){
            g.dfsTraversal('a',visited);
        }
    }

    // non disconnected component
    // g.dfsTraversal('a',visited);
    
return 0;
}