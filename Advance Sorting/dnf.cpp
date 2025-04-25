//SORT an array of 0's,1's,2's
#include<iostream>
using namespace std;

//DNF sort(Dutch National Flag)
void dnf(int n,int arr[]){
    int low=0;
    int mid=0;
    int high=n-1;
    while (mid<=high)
    {
        if (arr[mid]==0)
        {
           swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
       else if (arr[mid]==1)
        {
            mid++;
        }
      else
      {
        swap(arr[high],arr[mid]);
        high--;
      }
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];

}
dnf(n,arr);
 for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
    
}
return 0;
}   