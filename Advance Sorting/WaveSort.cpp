#include<iostream>
using namespace std;

//Wave sort -->Sort like a wave with each element is smaller than its neighbouring elements
void waveSort(int arr[],int n){
    for (int i = 1; i < n; i+=2)
    {
        if (arr[i]>arr[i-1])
        {
            swap(arr[i],arr[i-1]);
        }
        if (arr[i]>arr[i+1] && i<=n-2)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }

    
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
     int n;
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  waveSort(array,n);
  display(array,n);

//   input-->1 3 4 7 5 6 2
//   output-->3 1 7 4 6 2 5

return 0;
}