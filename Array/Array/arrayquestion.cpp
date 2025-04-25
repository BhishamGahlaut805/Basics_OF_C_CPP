#include<iostream>
using namespace std; 
int main(){
   int n;
    cin>>n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }
   
    // //1. Greatest array till i
    // int mx= -199998999;
    // for (int i = 0; i < n; i++)
    // {
    //    mx=max(mx,a[i]);
    //    cout<<mx<<" ";
    // }
    
    // return 0;

    //2.LONGEST ARITHMETIC SUBARRAY
// An arithmetic array is an array that contains at least two integers and the
// differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
// and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
// not arithmetic arrays.
// Sarasvati has an array of N non-negative integers. The i-th integer of the array is
// Ai
// . She wants to choose a contiguous arithmetic subarray from her array that has
// the maximum length. Please help her to determine the length of the longest
// contiguous arithmetic subarray.
//GOOGLE KICKSTART

    // int ans=2;
    // int d=a[1]-a[0];
    // int j=2;
    // int curr=2;
    // while (j<n)
    // {
    //    if (a[j]-a[j-1]==d)
    //    {
    //     curr++;
    //    }
    //    else{
    //     d=a[j]-a[j-1];
    //     curr=2;
    //    }
    //    ans=max(curr,ans);
    //    j++;
        
    // }
    
    // cout<<ans <<" ";
    // return 0;

    //2.GOOGLE KICKSTART
//     Problem
// Isyana is given the number of visitors at her local theme park on N consecutive
// days. The number of visitors on the i-th day is Vi

// . A day is record breaking if it

// satisfies both of the following conditions:
// ● The number of visitors on the day is strictly larger than the number of
// visitors on each of the previous days.
// ● Either it is the last day, or the number of visitors on the day is strictly larger
// than the number of visitors on the following day.
// Note that the very first day could be a record breaking day!
// Please help Isyana find out the number of record breaking days.

// void recordbreaker()  // here expalined this function only for value n=1; result =1; itself record breaker day
// {                //Separate function 
//     int n;
//     cin>>n;
//     int a[n+1];
//     for (int i = 0; i < n; i++)
//     {
//        cin>>a[i];
//     }
    

//     a[n]=-1;
//     if (n==1)
//     {
//         cout<<" 1 ";
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//        cin>>a[i];
//     }
    
//     int ans=0;
//     int mx=-1;
//     for (int i = 0; i <n; i++)
//     {
//      if (a[i]>mx&& a[i]>a[i+1])
//      {ans++;
//         ans=max(mx,a[i]);
//     }
    
//     }
//     cout<<ans<<" "; 
// }

//4. sum of all subarrays

int curr=0;     // started current value from 0
for (int i = 0; i < n; i++)
{curr=0;       // explained again so that inside loop j it can start from 0i.e; second element to form subarray
    for (int j = i; j < n; j++)
    {
        curr=curr+a[j];
        cout<<curr <<" ";
    }
    
}


}