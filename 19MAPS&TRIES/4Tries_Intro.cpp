#include<iostream>
using namespace std;

class TrieNode{
    public:
        char value;
        TrieNode* children[26]; //array of pointer
        bool isTerminal;

        TrieNode(char val){
            this->value = val;
            for(int i=0;i<26;i++){
                children[i] = NULL;
            }
            this->isTerminal = false;
        }
};
// insertion
void insertWord(TrieNode* root,string word){
    cout<<"Recieved word: "<<word << " for insertion"<<endl;
    
    // base case
    if(word.length() == 0){
        root->isTerminal == true; //last char ko mark kr liya
        return;
    }
    char ch = word[0];
    int index = ch-'a';

    TrieNode* child;
    if(root ->children[index] != NULL){ //koi value pde h phle hi
        // child present
        child = root->children[index];
    }
    else{
        // child absent
        child = new TrieNode(ch); //child create kr diya
        root->children[index] = child; //child ko link kr diya
    } 

    // recursion
    insertWord(child,word.substr(1)); //child ko 1st char se substring bhj diya
} 

int main(){
    TrieNode* root = new TrieNode('-'); //root node create krde
    insertWord(root,"donation");
return 0;
}