#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

int power(int n,int p){
    if(p==0){
        return 1;
    }
    return n*power(n,p-1);
}

int factorial(int k){
    if(k==0){
        return 1;
    }
    return k*factorial(k-1);
}

int fib(int n){  //nth term of a fibonacci series
    if(n==0||n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
bool sort(int arr[],int n){
   if(n==1){
    return true;
   }
   bool restarray=sort(arr+1,n-1);
    return (arr[0]<arr[1] && restarray);
}

void printdec(int n){  //decreasing order print
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printdec(n-1);
    cout<<endl;
}
void printinc(int n){  //increasing order print
    if(n==0){
        return;
    }
    printinc(n-1);
    cout<<n<<" ";
    
}

//first and last occurence in an array
int firstocc(int arr[],int n,int i,int key){
    if(i==n){               //i=pointer starting with 0
        return -1;          //not received the key
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key){
     if(i==n){               //i=pointer starting with 0
        return -1;          //not received the key
    }
    int restarray= lastocc(arr,n,i+1,key);      //opposite of first occurence
    if(restarray!= -1){
        return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}


int main(){
     int n;
    // cin>>n;
//    // cout<<" Sum upto n is "<<sum(n)<<endl;
//     // int p;
//     // cin>>p;
//     // cout<<power(n,p)<<endl;

//     cout<<factorial(n)<<endl;
     cout<<fib(5)<<endl;

//  int n;
//      cin>>n;
//      int arr[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }
// cout<<sort(arr,n);
// printdec(n);
// printinc(n);

// int n;
// cin>>n;
// int key;
// cin>>key;
// int arr[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }
// //starting pointer i with 0
// cout<<"First occurence of key is "<<firstocc(arr,n,0,key)<<endl;
// cout<<"Last occurence of key is "<<lastocc(arr,n,0,key);

 }

            