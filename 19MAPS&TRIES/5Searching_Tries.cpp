#include<iostream>
using namespace std;

class TrieNode{
    public:
    char value;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char val){
            this->value = val;
            for(int i=0; i<26; i++){
                children[i] = NULL;
            }
            this->isTerminal = false;
        }
};
// O(k)
// insertion
void insertWord(TrieNode* root, string word){
    // cout<<"Recieved word: "<<word << " for insertion"<<endl;
    
    // base case
    if(word.length() == 0){
        root->isTerminal = true; //last char ko mark kr liya
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
//  O(k)
// searching
bool searchWord(TrieNode* root,string word){
    // base case
    if(word.length() == 0){
        return root->isTerminal; 
    }
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;

    if(root->children[index] != NULL){
        // present of found
        child = root->children[index];
    }
    else{
        // not found
        return false;
    }

    // rexursion
    bool recursionKaAns = searchWord(child,word.substr(1));
    return recursionKaAns;
}
// O(k)
// deletion
void deleteWord(TrieNode* root,string word){
    // base case
    if(word.length() == 0){
        root->isTerminal = false;
        return;
    }

    // case 1
    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;

    if(root->children[index] != NULL){
        //  present
        child = root->children[index];

    }else{
        // not present
        return;
    }
    // baali recursion tera
    deleteWord(child,word.substr(1));

}


int main(){

    TrieNode* root = new TrieNode('-');

    insertWord(root,"cater");
    insertWord(root,"care");
    insertWord(root,"com");
    insertWord(root,"lover");
    insertWord(root,"loved");
    insertWord(root,"load");
    insertWord(root,"lov");
    insertWord(root,"bat");
    insertWord(root,"cat");
    insertWord(root,"car");
    

    cout<<"Insertion Done"<<endl;
    if(searchWord(root,"loved")){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    cout<<"Deletion : "<<endl;
    deleteWord(root,"loved");

    if(searchWord(root,"loved")){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }


return 0;
}