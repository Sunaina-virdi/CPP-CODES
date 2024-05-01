#include<iostream>
#include<unordered_map>
// agr ordered map use krte h toh hume sab sorted order m milega
using namespace std;
int main(){
    // create a map
    unordered_map<string,int>mapping;
    
    // way of creating pair
    // way 1
    pair<string,int>p = make_pair("love",25);

    // way 2
    pair<string,int> q("dipansh",24);

    // way 3
    pair<string,int> r;
    q.first = "arun";
    q.second = 21;

    // insertion

    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);
    mapping["babbar"] = 51;

    cout<<"Size of map: "<<mapping.size()<<endl;

    // access
    cout<<mapping.at("love")<<endl;
    cout<<mapping["love"]<<endl;

    // searching
    cout<<mapping.count("love")<<endl; //count means agr present h toh 1 print hoga agr nhi h toh 0

    if(mapping.find("babbar") != mapping.end()){
        cout<< "Found" << endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    cout<<"Size of map: "<<mapping.size()<<endl;
    cout<<mapping["kumar"]<<endl; //agr hum square bracket se access krna try krte h 
    // or hume nhi milta toh vo value insert hojate h or size baad jata h
    cout<<"Size of map: "<<mapping.size()<<endl;


return 0;
}