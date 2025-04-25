#include<iostream>
#include<stack>
using namespace std;

//binary to sentence conversion
void binary(int arr[],int n){
    int ans=0;
    int x=1;
    for(int i=0;i<n;i++){
        while(arr[i]>0){
        int lastdigit=arr[i]%10;
        ans=lastdigit*x;
        x*=2;
        arr[i]/=10;

        }
        arr[i]=arr[ans];
    }
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    binary(arr,n);
    

}