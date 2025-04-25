#include<iostream>
#include<windows.h>
using namespace std;

//9. o &1 in no. pyramid
int main (){
    // int i,j,a;
    // cout<<"ENTER A NO.";
    // cin>>a;
    // system("color 61");

    // for (int i = 1; i <=a; i++)
    // {
    //     for (int j= 1; j<=i; j++)
    //     {
    //         if ((i+j)%2==0)
    //         {
    //             cout<<" 1 ";
    //         }
    //         else
    //         {cout<<" 0 ";

    //         }


    //     }
    //     cout<<endl;

    // }

    // 10.pattern next numbers in down pyramid

    int n;
    cout<<"enter no.";
    cin>>n;
    system("color 74");
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n+1-i; j++)
        {
           cout<<j<<" ";
        }
        cout<<endl;
    }

    //11.Upright triangle pattern

//     int n;
//     cout<<"enter no.";
//     cin>>n;
//     system("color 74");
//     for (int i = 1; i <=n; i++)
//     {
// for (int j = 1; j <=n-i; j++)
// {
//    cout<<" ";
// }
// for (int j = 1; j <=i; j++)
// {
//    cout<<"*"<<" ";
// }
// cout<<endl;


//     }

//12.right rhombus pattern

//       int n;
//     cout<<"enter no.";
//     cin>>n;
//     system("color 74");
//     for (int i = 1; i <=n; i++)
//     {
// for (int j = 1; j <=n-i; j++)
// {
//    cout<<" ";
// }
// for (int j = 1; j <=n; j++)
// {
//    cout<<"*"<<" ";
// }
// cout<<endl;


 //   }

//13.down triangle/pyramid
//       int n;
//      cout<<"enter no.";
//     cin>>n;
//     system("color 74");
//     for (int i = n; i >=1; i--)
//     {
// for (int j = 1; j <=n-i; j++)
// {
//    cout<<" ";
// }
// for (int j = 1; j <=i; j++)
// {
//    cout<<"*"<<" ";
// }
// cout<<endl;


//     }

     return 0;



}