#include<iostream>
#include<windows.h>
using namespace std;
int main (){


    //17.Star pattern

    int n;
    cout<<"ENTER NO.";
    cin>>n;
    system("color 74");
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;}
       for (int i = n; i >=1; i--)
    {
        for (int j = 1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*"<<" ";
        }
       
    
    cout<<endl;
        
    }

    //18.reverse of star 2 triangles upside down

    // int n;
    // cout<<"ENTER NO.";
    // cin>>n;
    // system("color 74");
    // for (int i = n; i >=1; i--)
    // {
    //     for (int j = 1; j<=n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;}
    //    for (int i =1; i <=n; i++)
    // {
    //     for (int j = 1; j<=n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
       
    
    // cout<<endl;
        
    // }
    
    //19.zig zag pattern

    // int n;
    // cout<<"ENTER NO.";
    // cin>>n;
    // system("color 74");

    // for (int i = 1; i <=3; i++)
    // {
    //    for (int j = 1; j<=n; j++)
    //    {if(( (i+j)%4==0 ) ||(i==2 && j%4==0))
    //     {
    //        cout<<" * ";

    //     }
    //     else                                    //spaces must be left carefully!!!
    //     {
    //         cout<<"   ";
    //     }
    //    }
    //     cout<<endl;
    // }
    return 0;
    }
    
    
