#include<iostream>
#include<windows.h>
using namespace std;
int main (){

    //14.pattern left rhombus side

//           int n;
//      cout<<"enter no.";
//     cin>>n;
//     system("color 74");
//     for (int i = n; i >=1; i--)
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


//     }

//15.paralellogram pattern

// int a,b;
// cout<<"ENTER ROW AND COL";
// cin>>a>>b;
//  system("color 74");

// for (int i = 1; i <=a; i++)
// {for (int j = 1; j<=b-i; j++) // j<=b-i; yaha a ya b se fark nhi pdta
// {
//     cout<<" ";

// }
// for (int j = 1; j <=b; j++)
// {
// cout<<"BHISHAM"<<" ";

// }
// cout<<endl;
// }

//16.Palindromic pattern

int n,j;
cout<<"Enter no.";
cin>>n;

for (int i = 1; i <=n; i++)
{
    for ( j = 1; j<=n-i; j++)
    {
        cout<<" ";
    }
    int k=i;
    for (; j<=n; j++)
    {
        cout<<k--;
    }
    k=2;
    for (; j <=n+i-1; j++)
    {
        cout<<k++;
    }
    cout<<endl;
}
    return 0;
}