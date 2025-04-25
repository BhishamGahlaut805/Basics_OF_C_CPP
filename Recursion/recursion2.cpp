#include<iostream>
using namespace std;
//1.Reverse of a string
void reverse(string s){
    if(s.length()==0){ //base case
        return;
    }
    string revofstring= s.substr(1);
    reverse(revofstring);
    cout<<s[0];
}
//2.Function to replace pi with 3.14 in a string
void replace(string s){
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replace(s.substr(2));
    }
    else{
        cout<<s[0];
        replace(s.substr(1));
    }
}
//3.Tower of hanoi

void towerofhanoi(int n,char source,char destination,char helper){
    if(n==0){                                   //n=number of blocks
        return;                                 //base case
    }
    towerofhanoi(n-1,source,helper,destination); //n-1 blocks shift from souce to helper
    cout<<"Move from "<<source<<" to "<<destination<<endl;
    towerofhanoi(n-1,helper,destination,source); //transfer from helper to destination as helper now become source and souce becomes helper

}
//4.Remove duplicates from a string
string removeduplicate(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];                              //storing value of first character
    string ans= removeduplicate(s.substr(1));  //calling recursive function for the rest of the function
    if(ch==ans[0]){                            //if both characters are same
        return ans;                            //return unique character without repitition
    }
    return(ch+ans);                            //else return string
}

//5.move all the x to the end of the string
string movex(string s){
    if(s.length()==0){  //base case
        return "";
    }
    char st= s[0];
    string ans=movex(s.substr(1));  //calling out our recursive function
    if(st=='x'){                    // case element is x

        return ans+st;              //we want x at the end because x is present
    }
    return (st+ans);                //we want same string because no x is present
}

//6.print all the subsequence of an string s
void subseq(string s,string ans){  //base case
    if(s.length()==0){               //if length of string is 0
        cout<<ans<<endl;
        return;                            //ans is empty string because we are starting with an empty string
    }
    char start=s[0];
    string restofstr=s.substr(1);
    subseq(restofstr, ans);       //calling recursive function without character to form branches having empty as well as non empty subseq
    subseq(restofstr,ans+start);  //calling recursive function with character to form branches having  non empty subseq

}

//7. print all the subsequences with their ascii codes
void sequence(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int ascii= ch;
    //calling recursive function 3 times one without character ; one with ch;and other while taking  ascii values
    sequence(s.substr(1),ans);
    sequence(s.substr(1),ans+ch);
    sequence(s.substr(1),ans+ to_string(ascii));
}

//8.print all possible subseq from phone digits
string keypadArr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; //starting with 2 empty string s due to 0 based indexing


void keypad(string s,string ans){      //ans is empty string , input digits value in s

if(s.length()==0){
        cout<<ans<<endl;                //base case
        return;
}
char ch=s[0];                      //storing first value
    string code= keypadArr[ch-'0'];   // subtracting 0's ascii value to make it a integer value to be understood by array data structure


for(int i=0;i<code.length();i++){
 keypad( s.substr(1), ans+code[i]);   //calling recursive function with code[i] to use saved value in string code wrt keypadArr[]
}
}
int main(){
        //  string s;
        //  cin>>s;
        // reverse(s);
        // replace(s);
        towerofhanoi(3,'A','B','C');
        // cout<< removeduplicate(s)<<endl;
        //  cout<<movex(s)<<endl;
        // subseq(s,"");
        //sequence(s,"");
        // keypad(s,"");
return 0;
}



