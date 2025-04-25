#include<iostream>

#include<vector>
#include<algorithm>

using namespace std;

//making a function mycompare for problem 7
bool mycompare(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;
}
int main(){

    //1.Declaring a Vector
    //Vector is a DYNAMIC ARRAY OF NOT A FIXED SIZE
    vector<int> vector_name;
    vector_name.push_back(1); //store values in vector
    vector_name.push_back(2);
    vector_name.push_back(3);
    vector_name.push_back(4);
    vector_name.push_back(5);

   //2. //output a vector METHOD 1
    for(int i=0;i<vector_name.size();i++){
        cout<<vector_name[i];
    }
    cout<<endl;
    //output a vector METHOD 2 using iterator
    vector<int>::iterator it;
    for(it=vector_name.begin();it!=vector_name.end();it++){
        cout<<*it;
    }
    cout<<endl;
    
    //*it--> iterator is a pointer

    //output a vector METHOD 3 using AUTO keyword
    // AUTO keyword automatically select the data type according to the initialisation

    for(auto element:vector_name){
        cout<<element;
    }
    cout<<endl;

    //3.POP back function--> remove last element from vector
    vector_name.pop_back();
    for(auto element:vector_name){
        cout<<element;
    }
    cout<<endl;
    //4.Vector declaration
     vector<int> v(4,50);
    for(auto element:v){
        cout<<element<<" ";
    }
    //50 50 50 50
    cout<<endl;
     vector<char> v1(5,'A');
    for(auto element:v1){
        cout<<element<<" ";
    }
    cout<<endl;
    //A A A A A

    //5.SWAP function-->swap only same DATA TYPES
    vector<int> v2(5,2);
    swap(v,v2);
    
    for(auto element:v){
        cout<<element<<" ";
    }//2 2 2 2 2
    cout<<endl;

    //6.Sort function
    vector<int> v3{2,3,1,5,6,8,8,5,3,4};
    sort(v3.begin(),v3.end());
    for(auto any_name:v3){
        cout<<any_name<<" ";
    }
    cout<<endl;
    //7.Vector pairs
    //convert a vector into reduced form
    
    int arr[]={10,16,7,14,5,3,12,9};
    vector< pair<int,int>> v5;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        // pair<int,int> p;//declaring a pair
        // p.first=arr[i];
        // p.second=i;
        // OR
        //first denote first element in pair
        v5.push_back(make_pair(arr[i],i));
    }
    sort(v5.begin(),v5.end(),mycompare);
    for(int i=0;i<v5.size();i++){
        arr[v5[i].second]=i;
        //in the sorted vector we can fix the value of that index(in the second means pair's second i.e. index)
    }
    //second pair is the index
      for(int i=0;i<v5.size();i++){
       cout<< arr[i]<<" ";
    }
// Output--> 4 7 2 6 1 0 5 3 

return 0;
}