#include<iostream>
#include<stack>
using namespace std;

//Sentence to binary code
string getword(string s){
    //stack<string> st;
    string word="";
    for(int i=0;i<s.length();i++){
        while(s[i]!=' '&& i<s.length()){
            word+=s[i];
            i++;
        }
        
    }
    return word;
}
int main(){
    string s;
    getline(cin,s);
    cout<<getword(s);
    

} 