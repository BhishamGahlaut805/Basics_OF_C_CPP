#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    //4.rectangle + operations
    // int row,col;
    // cout<<"ENTER ROW AND COLUMN";
    // cin>>row>>col;

     //system("Color 61");
    // for (int i = 1; i <=row; i++)
    // {
    //    for (int j = 1; j <=col; j++)
    //   {
    //  cout<<col/row;
    //    }
    //   cout<<endl;
    // }

   //5.pyramid

   // int n;
   // cout<<"ENTER A NUMBER";
   // cin>>n;
   // system("color 61");

   // for (int i = n; i>=1; i--)
   // {                                // most carefully to be written
   //  for (int j = 1; j<=i; j++)
   //  {
   //     cout<<"* ";
   //  }
   //  cout<<endl;

   // }

//6. for down pyramid
//  int n;
//    cout<<"ENTER A NUMBER";
//    cin>>n;
//    system("color 61");

// for (int i = 1; i <=n; i++)
// {for (int j = 1; j <=i; j++)
// {
//     cout<<i<<" ";
// }
// cout<<endl;

// }

//7.FLOYD'S TRIANGLE

//  int n;
//     cout<<"ENTER A NUMBER";
//     cin>>n;
//    system("color 61");

//    int count=1;

//    for (int i = 1; i <=n; i++)
//    {for (int j = 1; j <= i; j++)
//    {
//     cout<<count<<" ";
//     count ++;
//    }
//    cout<<endl;


//    }

//8.butterfly pattern
   int n;
    cout<<"ENTER A NUMBER";
    cin>>n;
   system("color 74");

   for (int i = 1; i <=n; i++)
   {
    for (int j = 1; j <=i; j++)
    {
       cout<<"*";
    }
    int space=2*n -2*i;
    for (int j = 1; j <=space; j++)
    {
       cout<<" ";
    }
    for ( int j= 1; j <=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;

   }
    for (int i = n; i >=1; i--)
   {
    for (int j = 1; j <=i; j++)
    {
       cout<<"*";
    }
    int space=2*n -2*i;
    for (int j = 1; j <=space; j++)
    {
       cout<<" ";
    }
    for ( int j= 1; j <=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;

   }


    return 0;


}