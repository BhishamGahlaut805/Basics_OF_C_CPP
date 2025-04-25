#include<iostream>
using namespace std;

//Quicksort -->Divide and Conquer

//Making a partition function which divide array into 
//partitions and sort it


// Quicksort is a sorting algorithm based on the divide and conquer approach where

// An array is divided into subarrays by selecting a pivot element (element selected from the array).

// While dividing the array, the pivot element should be positioned in such a way that elements less than pivot are kept on the left side and elements greater than pivot are on the right side of the pivot.
// The left and right subarrays are also divided using the same approach. This process continues until each subarray contains a single element.
// At this point, elements are already sorted. Finally, elements are combined to form a sorted array.



int partition(int arr[],int l,int r){
    int pivot=arr[r]; //r is last index of array
    int i=l-1;
    for (int j= l; j<r; j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
        
    }
    //Moving pivot before
    swap(arr[i+1],arr[r]);
    return i+1;
}

//Partition function gives the right index 
//of the element after placing it on the right place

void quicksort(int arr[],int l,int r){
    if(l<r){
        //making a pivot point from last element

        int pi= partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);

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

  

    quicksort(array,k-1,x-1); //0 based indexing
    display(array,n);
    return 0;
}