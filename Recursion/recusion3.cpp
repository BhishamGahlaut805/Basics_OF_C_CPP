#include<iostream>
using namespace std;
//to find all possible permutations of a number
void permutation(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char start=s[i];                         //storing all elements in string 
        string rest=s.substr(0,i) +s.substr(i+1);// storing value before and after the selected value
        permutation(rest,ans+start);             //calling recursive function for the rest of string
    }
    
}
//count number of paths in board game /dice(1-6)
int countpath(int s,int e){  //for starting and ending points 
if (s==e)
{
    return 1;
}
if (s>e)
{
    return 0;
}                           //BASE CASES
//main recursive case 
int count=0;
for (int i = 1; i <=6; i++)// 6 numbers on a dice
{
    count+= countpath(s+i,e);//recursive function for incresing starting positions 
}
return count;
}

// CountPathMaze
// Given a 2D grid, find the number of ways to reach (n-1, n-1).
// You can go to (i,j) from (i-1,j) and (i,j-1).
// Time Complexity: O(2
// n
// )
// Space Complexity: O(2
// n
// )

int countpathmaze(int n,int i, int j){ //i and j are iterator
//base cases
if(i==n-1 && j== n-1){
    return 1;      //we are at our destination

}
if (i>n || j>n){
    return 0;  //no possible ways
}


//main recursive case
return (countpathmaze(n,i+1,j) + countpathmaze(n,i,j+1));
//2 recursive functions because we can move in either 2 directions

}

int main(){
// string s;
//cin>>s;
//permutation(s,"");
// int start,end;
// cin>>start>>end;
// cout<<"No. of possible paths are "<<countpath(start,end);


int n;
cin>>n;
cout<<countpathmaze(n,0,0); // starting iterator with 0,0
return 0;
}