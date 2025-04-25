#include<iostream>
#include<vector>
using namespace std;

//Return all possible permutations of a distinct array/vector of n size
vector<vector<int>>ans; //globally declared ans variable
void permutation(int idx, vector<int>&v2){
    //Base case// idx-->current index where  swap will be started
   
    if(idx==v2.size()){
        ans.push_back(v2);
        return;
    }
    //main recursive approach
    for(int i=idx;i<v2.size();i++){
        swap(v2[i],v2[idx]);
        permutation(idx+1,v2);
         swap(v2[i],v2[idx]);
    }

return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(auto &element:v1){
        cin>>element;
    }

 permutation(0,v1);
 for(auto v:ans){
    for(auto i:v){
        cout<<i<<" ";
    } cout<<endl;
 }

}