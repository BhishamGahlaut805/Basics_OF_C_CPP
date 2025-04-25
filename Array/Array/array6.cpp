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

    //main code for smallest missing positive integer in array of integers

    /*Steps to Solve:
1. Build the Check[ ] array initialized with False at all indices.
2. By iterating over the array and marking non-negative a[i] as true i.e.

if(a[i] >= 0)
check[a[i]] = True

3. Iterate in the Check[ ] from i=1, BREAK the loop when you find check[i] =
False and store that i in the ans variable.[[[[ present mark of positives and missing found out at absent/false marked]]]]
4. Output the ans.*/


    const int N=1e5+2;     // N TAKEN BECAUSE THE RESULT WILL NOT BE IN OUR ARRAY
    bool check[N];
    for (int i = 0; i < N; i++)     //LOOP RUN FROM 0 TO N  TO MAKE ALL ELEMENTS UPTO LIMIT FALSE     
    {
        check[i]=0;  //0 means false , making all integers equal to F
    }
    for (int i = 0; i < n; i++)     //LOOP RUN FROM 0 TO n TO TAKE ARRAY[n] BELOW
    {
        if (a[i]>=0)    //making positive true/ visible
        {
            check[a[i]]=1; // 1 means making true to positive integers
        }
        
    }
    int ans=-1;              // now check to find the smallest positive missing number
    for (int i = 1; i < N; i++)//LOOP START AT 1 TAKING POSITIVE INTEGER AND CHECK UPTO N LIMIT SO THAT MISSING ELEMENT CAN BE FOUND AS IT IS NOT IN OUR ARRAY
    {
        if (check[i]== false)    // where check [i]is false means any positive integer is there
        {
           ans=i;
           break;
        }
        
    }
    cout<<"SMALLEST MISSING POSITIVE INTEGER IS "<<ans <<" "<<endl; // if ans not come it will remark it -1 else this ans will print
    return 0;
    
    
}