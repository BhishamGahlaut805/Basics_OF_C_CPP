#include<iostream>
#include<climits>
using namespace std;
int main(){
    //3 STEP PROCESS
    //1. STORE ALL VALUE OF ARRAY TO -1 EXCEPT POINTER
    //2.WHERE NOT EQUAL TO -1 FIND MIN. OF INDEX OF ARRAY ELEMENTS AND REPEAT THE LOOP
    //3. WHERE LOOP CLOSES ALL ELEMENTS DONE. PRINT THE INDEX REQUIRED
    
    //1. minimum repeating element
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     const int N=1e5+2;
//     int index[N];
//     for (int i = 0; i < N; i++)
//     {
//        index[i] =-1;
//     }
//     int minidx=INT_MAX;     // resultant index
//     for (int i = 0; i < n; i++)
//     {
//         if (index[a[i]]!=-1)
//         {
//             minidx=min(index[a[i]],minidx);
//         }
//         else
//         {
//             index[a[i]]=i;      // else loop restart from this step
//         } 
//     }
//     if (minidx==INT_MAX)
//     {
//         cout<<"-1 ";
//     }
//     else{
        
//         cout<<"VALUE OF FIRST REPEATING ELEMENT INDEX IS "  <<minidx+1<<" "<<endl;
//         cout<<"VALUE OF FIRST REPEATING ELEMENT IS "<<a[minidx]<<" "<<endl;
//     }
// }

//2.SUBARRAY WITH GIVEN SUM S

int n;
cout<<"enter number of elements of array "<<endl;
cin>>n;
int s;
cout<<"ENTER SUM OF SUBARRAY "<<endl;
cin>>s;
int a[n];
cout<<"ENTER ARRAY ELEMENTS"<<endl;;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
//main block of code!!
int curr=0;
for (int i = 0; i < n; i++)
{
    curr=0;             // taking sum of all subarrays
    for (int j = i; j <n; j++)
    {
        curr+=a[j];
        
        if
        (curr==s)
        {
          cout<<"starting point is "<<i+1<<" "<<"ending point is "<<j+1<<" "<<endl;//print starting and ending index of sum
            return 0;     // MOST IMPORTANT RETURN 0
            //most time taken at this mistake only return 0;
            //easiest approach
        }
        
    }
    
   
}
cout<<" -1 ";
   
}

