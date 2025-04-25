#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //1. Printing all subarrays
    
    // for (int i = 0; i < n; i++)
    // {
    //    for (int j=i; j<n;j++)
    //    {
    //     for (int k=i;k<=j;k++)
    //     {
    //         cout<<a[k]<<" ";
    //     }
    //     cout<<endl;
    //    }
        
    // }
    //2. Max sum subarray
    // int maxsum=INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //    for (int j=i; j<n;j++)
    //    {int sum=0;
    //     for (int k=i;k<=j;k++)
    //     {
    //        sum+=a[k];
    //     }
    //    maxsum =max(sum,maxsum);
    //    }
        
    // }
    //    cout<<"MAX SUM OF SUBARRAY IS"<<maxsum<<" "<<endl;
    //    return 0;
        
   
    //3.cumulative sum approach for max sm subarray and also print its indices
//     int currsum[n+1];
//     currsum[0]=0;
//     for (int i = 1; i <= n; i++)
//     {
//         currsum[i]= currsum[i-1]+a[i-1]; // i-1 because array goes to no of element +1
//     }
//     int maxsum=INT_MIN;
//     for (int i = 1; i <=n; i++)
//     {
//         int sum=0;
//         for (int j = 0; j < i; j++)
//         {
//             sum=currsum[i]-currsum[j];
//             maxsum=max(maxsum,sum);
//         }
        
//     }
//     cout<<maxsum<<endl;
//     int curr=0;
// for (int i = 0; i < n; i++)
// {
//     curr=0;            
//     for (int j = i; j <n; j++)
//     {
//         curr+=a[j];
        
//         if
//         (curr==maxsum)
//         {
//           cout<<"starting point is "<<i+1<<" "<<"ending point is "<<j+1<<" "<<endl;
//           return 0;
         
//         }
        
//     }
    
    
   
// }

    //4. KADANE'S ALGORITHM FOR SAME MAXIMUM SUM SUBARRAY least time complexity of o(n)
    int currsum=0;
    int maxsum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum+=a[i];
       
        if (currsum<0)
        {
            currsum=0;
        }
         maxsum=max(maxsum,currsum);
    }
    cout<<maxsum<<endl;
   
    
     }
