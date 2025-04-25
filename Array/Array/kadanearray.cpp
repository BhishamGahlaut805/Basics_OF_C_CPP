#include<iostream>
#include<climits>
using namespace std;
// function for kadane algorithm for maxsum of subarray
// int kadane(int a[],int n){
//     int currentsum=0;
//     int maxsum=INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         currentsum+=a[i];
//         if(currentsum<0){
//            currentsum=0;
//         }
//         maxsum=max(maxsum,currentsum);
//     }
    
// return maxsum;
// }
// //Max sum in circular subarray
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     int wrapsum;
//     int nonwrapsum;
//     nonwrapsum= kadane( a,n); // this give normal sum without any circular
//     int totalsum=0;
//     for(int i=0;i<n;i++){
//         totalsum+=a[i];
//         a[i]=-a[i];

//     }

//     wrapsum= totalsum+kadane(a,n); // sub. the negative of non contributing elements gives this result
//     cout<<max(wrapsum,nonwrapsum)<<endl;// now to print max of wrapsum and nonwrapsum
//     return 0;

// }

//2.PAIR SUM PROBLEM TO CHECK IF A PAIR SUM IS EQUAL TO K
//least time complexity(O^n)
    // bool pairsum(int arr[], int n, int k){
    //     int low=0;
    //     int high=n-1;
    //     while(low<high){        //to check sorted order
    //     if(arr[low]+arr[high]==k){
    //         cout<<low+1<<" "<<high+1<<endl;
    //         return true;
    //     }
    //    else if (arr[high]+arr[low]>k)
    //     {
    //         high--;
    //     }
    //     else{
    //         low++;
    //     }
    //     }
    //     return false;
    // }
    // int main(){
       
    // int n ,k;
    // cout<<"enter number of elements , key "<<endl;
    // cin>>n>>k;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // cout<<pairsum(a,n ,k)<<endl;
    // }

    //another approach for same problem pairsum but with more time complexity O(n^2)
     bool pairsum(int arr[], int n, int k){
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i; j < n; j++)     // to find all the pairs
            {
                if (arr[i]+arr[j]==k)
                {
                    cout<<i+1<<" "<<j+1<<endl; // +1 to print indices
                    return true;
                }
                
            }
            
        }
        return false;
     }
    int main(){
       
    int n ,k;
    cout<<"enter number of elements , key "<<endl;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<pairsum(a,n ,k)<<endl;
    }