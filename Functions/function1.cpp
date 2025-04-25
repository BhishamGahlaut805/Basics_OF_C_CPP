#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
//FIBONACCI SERIES
// int a=0;
// int b=1;
// int nexterm;
// void fib(int n){        //carefully filled exactly
// for (int i = 1; i <=n; i++)
// {
//    cout<<a<<endl;
//    nexterm=a+b;
//    a=b;
//    b=nexterm;

// }
// return;
// }


// int main(){
//     int n;
//     cin>>n;

//     fib(n);
// }

// FACTORIAL OF A NUMBER

// int fact(int n){
// int factorial =1;
// for (int i = 2; i <=n; i++)
// {
//    factorial*=i;
// }
// return factorial;
// }
// int main(){
//     int n;
//     cin>>n;
//    int ans= fact(n);
//    cout<<ans<<endl;
// }

//PERMUTATION AND COMBINATION;
// int fact(int n){
//     int factorial=1;
//     for (int i = 2; i <=n; i++)
//     {
//         factorial*=i;

//     }
//     return factorial;
    
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int comb= fact(n)/(fact(r)*fact(n-r));
//     int perm= fact(n)/(fact(n-r));
//     cout<<"combination ="<<comb<<"\n" ;
//     cout<<"permutation="<<perm<<endl;;

//     return 0;
// }

//PASCAL TRIANGLE USING FUNCTIONS
int fact(int n){
    int factorial =1;
    for (int i = 2; i <=n; i++)
    {
        factorial*=i;

    }
    return factorial;
    
}


int main(){
    int n;
    cout<<"ENTER A NUMBER";
    cin>>n;
  //  system("color 74");
   for (int i = 0; i <= n; i++)
   {
    for (int j = 0; j <=n-i; j++){
    cout<<" ";}
    for (int j = 0; j <=i; j++)
    {
        cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
    }
    cout<<endl;
    
   }
   
    return 0;
}

//2. PASCAL TRIANGLE
// int fact(int n){
//     int factorial =1;
//     for (int i = 2; i <=n; i++)
//     {
//         factorial*=i;

//     }
//     return factorial;
    
// }


// int main(){
//     int n;
//     cout<<"ENTER A NUMBER";
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//         }
//         cout<<endl;
//     }
    
   
//     return 0;
// }
