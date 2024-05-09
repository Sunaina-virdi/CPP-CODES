#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
        unordered_map<int,list<int>> adjlist;
        void addEdge(int u,int v,bool direction){
            // direction -> 0 ->undirected
            // direction -> 1 ->directed

            if(direction == 1){
                // u se v ki taraf ek edge h
                // u -> v
                adjlist[u].push_back(v);
            }
            else{
                // direction = 0;
                // u -- v 
                // u -> v
                adjlist[u].push_back(v);
                // v -> u
                adjlist[v].push_back(u);
            }
            cout<<endl<<"Printing adjlist"<<endl;
            printAdjlist();
            cout<<endl;
        }
        void printAdjlist(){
            for(auto i:adjlist){
                cout<<i.first<<" -> {";
                for(auto neighbour: i.second){
                    cout<<neighbour<<", ";
                }
                cout<<"}"<<endl;
            }
        }
};

int main(){

    graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(1,3,1);
    g.addEdge(2,3,1);

return 0;
}