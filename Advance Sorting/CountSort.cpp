#include<iostream>
using namespace std;
//Count sort
 void countsort(int arr[],int n){
    
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);  //firstly find the max element which denotes the size of count array
    }
    
    //making a count array which takes count of every element
    int count[k]={0};
    
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++; //Saving count of every element
    }
    
    //Now modifying count array-->adding all previous values to it/cumulative count
    int i=0;
    while(i<=k){
        count[i]+=count[i-1];
        i++;
    }
    
    //making an output array
    int output[n];
    for (int i = n-1;i>=0;i--)
    {
       output[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
    }
    
    //now finally placing output value in original array
    for (int i = 0; i < n; i++)
    {
       output[i]=arr[i];
    }
    
    
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

//     int n;
// cin>>n;
// int arr[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];

// }
 
int arr[]={1,3,5,4,3,2,3,3,2,0};
 int n = sizeof(arr) / sizeof(arr[0]);
 
 countsort(arr,n);
display(arr,n);
return 0;
}