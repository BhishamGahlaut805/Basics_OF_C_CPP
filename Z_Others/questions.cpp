#include<iostream>
#include<map>
using namespace std;
int main (){

    //gp 
//   int n;
//     cout<<"ENTER A NO. to find 2^n GP"<<"\n";
//     cin>>n;
    
//     int a=2;
//     for (int i = 1; i <=n; i++)
//     {
//        cout<<a<<" " ;
//        a=a*2;
//     }

//AP and HP
    // int n;
    // cout<<"ENTER number of terms for AP AND HP"<<"\n";
    // cin>>n;

    // int a=7;
    // float b=1;
    // for (int i = 1; i <=n; i++)
    // {
    //     cout<<a<<" "<<"\n"<<b<<" ";
    //    a=a+7;
    //     b=7/b+2;
        
    // }


// HP only

    int n;
    cout<<"ENTER number of terms for HP"<<"\n";
    cin>>n;

    
    float b=1;
    for (int i = 1; i <=n; i++)
    {
        cout<<b<<"\n ";
    b=1/b+2;
        
    }

}