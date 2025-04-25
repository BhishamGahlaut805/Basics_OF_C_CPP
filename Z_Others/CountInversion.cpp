#include<iostream>
using namespace std;

//Count Inversion 
//Method 1

int countInv(int arr[],int n){
    int inv=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            if (arr[i]>arr[j])
            {
                inv++;
            }
            
        }
        
    }
    return inv;
    
}
//Method 2 
//Optimised way using mergesort we will count total inversions on each merge

long long merge(int arr[],int l,int mid,int r){
    long long inv=0;

    int n1=mid-l+1;
    int n2=r-mid;

    int left[n1];
    int right[n2];

for (int i = 0; i < n1; i++)
    {
        left[i]=arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if (left[i]<=right[j])
        {
            arr[k]=left[i]; //No inversion in this case
            k++;
            i++;
        }
        else{
            arr[k]=right[j];
            inv+=n1-i; //Inversion of all element pairs
            k++;
            j++;
            
        }
    }
    while(i<n1){
        arr[k]=left[i];
            k++;
            i++;

    }
    while(j<n2){
         arr[k]=right[j];
            k++;
            j++;
    }
    return inv;
}

long long countMergeInv(int arr[],int l,int r){
    long long inv=0;
    if(l<r){
        int mid=(l+r)/2;
       inv+= countMergeInv(arr,l,mid);
       inv+= countMergeInv(arr,mid+1,r);
       inv+= merge(arr,l,mid,r);
    }

    return inv;
}

int main(){
         int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
   cout<< "Inversion count by method 1: "<<countInv(arr,n)<<endl;

// PS C:\Users\bhish\OneDrive\Desktop\CPP> .\CountInversion.exe
// 8
// 3 5 6 9 1 2 7 8
// Inversion count by method 1: 10
// Inversion count by method 2: 10

   cout<< "Inversion count by method 2: "<<countMergeInv(arr,0,n)<<" ";
return 0;
}