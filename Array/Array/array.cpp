#include<iostream>
#include<climits> // max and min function
using namespace std;
//int main(){
    // int array[5]{1,2,3,4,5};
    // cout<<array[4]<<endl;

//Taking array input
// int n;
// cin>>n;
// int array[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>array[i];
// }
// for (int i = 0; i < n; i++)
// {
//     cout<<array[i]<<" ";
// }

// finding max and min no. inan aaray
// int n;
// cin>>n;
// int array[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>array[i];
// }

// int maxno =INT_MIN;
// int minno= INT_MAX;
// for (int i = 0; i < n; i++)
// {
//    maxno= max(array[i],maxno);
//    minno= min(array[i],minno);
// }
// cout<<maxno<<"\n"<<minno<<endl;
// }

//3. SEARCHING IN AN ARRAY

//1.linear search
/*
int linearsearch(int n, int array[], int key)
{
    for (int i = 0; i <n; i++)
    {
        if (array[i]==key)
        {
            return i;
        }
        
    
    }
        return -1;
    
    
    
}
int main(){
int n;
cout<<"enter elements no. of an array ";
cin>>n;
int array[n];
for (int i = 0; i < n; i++)
{
   cin>>array[i];
}

int key;
cout<<"enter key ";
cin>>key;

cout<<linearsearch(n,array,key)<<endl;
}

*/



//1.Binary search

int binarysearch(int n, int array[], int key)
{
    int s=0;            // s starting point and e ending point 
    int e=n;
    while (s<=e)                // when s<=e obvious
     {
        int mid= (s+e)/2;               // to find mid point of series
        
            if (array[mid]==key)           
        {
           return mid;
        }
        else if (array[mid]>key)
        {
            e=mid-1;                    //in series we have replaced ending point by mid value minus 1 by looking the sequence
                                        //quite obvious
        }
        else
        {
            s=mid+1;                  //  again in this loop by looking the seq and taking starting point again
            
        }
        
     }
    
    return -1;
    
    
}
int main(){
int n;
cout<<"enter elements no. of an array ";
cin>>n;
int array[n];
for (int i = 0; i < n; i++)
{
   cin>>array[i];
}

int key;
cout<<"enter key ";
cin>>key;

cout<<binarysearch(n,array,key)<<endl;   //calling the above function
}





