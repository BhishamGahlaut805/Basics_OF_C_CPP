#include<iostream>
using namespace std;
// Merge sort
// Idea: Divide the array into two parts, sort the left part and sort the right part and
// merge them
// Time Complexity: O(N logN)
// Space Complexity: O(N) Since we need an arbitrary array as well.

int merge(int arr[],int l,int mid,int r){
    //Making temp arrays as we cannot compare 
    //and put values in the same array

    int n1=mid-l+1;
    int n2= r-mid;
    int a[n1]; //temp arrays
    int b[n2];

    //Array is sorted from l to mid and
    //mid to r now and putting values from
    // l to mid and mid to r in temp.arrays

    for (int i = 0; i < n1; i++)
    {
        a[i]=arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i]=arr[mid+1+i];
    }

    //MERGE START

    //making pointers for traversing array a,b,arr
    int i=0;  //a array
    int j=0;  //b array
    int k=l;  //traversing our main array arr

    while (i<n1 && j<n2)
    {
        //if b[j] is greater then fill arr[k] with arr[i] else fill with arr[j]
        if (a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
        
        
    }
    // now case when either n1 or n2 reached to last element 
    //and sorting is remaining
    while (i<n1)
    {
         arr[k]=a[i];
            k++;
            i++;
    }
    while (j<n2)
    {
          arr[k]=b[j];
            k++;
            j++;
    }
    

}
void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
    
}
//Function to display array
void display(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int main(){
      int n;
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  int k;
  cout<<"Enter Starting point of sorting "<<endl;;
  cin>>k;
  int x;
  cout<<"Enter Ending point of sorting "<<endl;;
  cin>>x;

  

    mergeSort(array,k,x); 
    display(array,n);

return 0;
}       