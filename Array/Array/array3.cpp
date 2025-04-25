// #include<iostream>
//  #include<climits>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cout<<"ENTER n";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   
    //1. first repeating element index
    const int N = 1e5+2 ;                // larger value so that it can't be changed
    int index[N];                         //taking a array randomly [index]
    for (int i = 0; i < N; i++)
    {
        index[i]=-1;                      //storing all value in array=-1; except a[i] element in which index of  
    }                                   // previous element could be stored
    
    int minindx=INT_MAX;                //to find first repeating element minindex variable is selected
                                        //initialised with max because we have to find minimum.
    for(int i=0; i<n;i++)
    {
      if (index[arr[i]]!= -1)                   // in spaces where value is not equal to-1; where value of index of pre element 
                                        //is stored
      {
    
        minindx=min(index[arr[i]],minindx);   // taking minimum repeating index

      }
      else{
        index[arr[i]]=i;              //where no -1 element again move pointer ahead to next element for cont. of loop
      }
    }
    if (minindx==INT_MAX)            // coming out of loop considering is the value of minindex equal to INTMAX(worst case!!)
    {
        cout<<"-1";
    }
    else
    {
        cout<<minindx+1<<endl;      // final ans output value +1 so that index value can be get right as 2nd element 2nd ....
    }
    

}