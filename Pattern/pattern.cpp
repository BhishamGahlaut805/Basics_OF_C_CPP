#include<iostream>
#include <windows.h> 

//FOR PATTERN QUESTIONS
//1.PATTERN.CPP
//2.NEW1.CPP
//3.HI.CPP
//4.p.CPP
//5.b.cpp
 
using namespace std;
//1. rectangle formation
int main(){
   // int row,col,i,j;
   //  cout<<"ENTER LENGTH AND BREADTH OF RECTANGLE"<<endl;
   //  cin>>row>>col;
    // system("Color 74"); 

   //  for ( i = 1; i <=row; i++)
   //  {
   //     for ( j = 1; j <=col; j++)
   //    {
   //   cout<<" I LOVE YOU MAA";

        
   //     }
   //    cout<<endl;
   //  }
       //2.HOLLOW RECTANGLE FORMATION
   //     int row, col;
   //     cout<<"enter row/col";
   //     cin>>row>>col;
   //     system("color 74");
   //   for (int i = 1; i <=row; i++)
   //  {
   //     for (int j = 1; j <=col; j++)
   //  {
   //      if (i==1 ||i==row ||j==1||j==col)
   //      {
   //          cout<<"@"<<" ";
   //      }
   //      else
   //      {
   //          cout<<" ";
   //      }}
   //    cout<<endl;
   //  }


       // 3.inverted pyramid
int n;
cout<<"ENTER A NUMBER";
cin>>n;

system("color 61");
for (int i = n; i>=1; i--)
{
   for (int j = 1; j<=i; j++)
   {
     cout<<i<<" ";
   }
   cout<<endl;
   
}

for (int i = n; i >=1; i--)
   {
    for (int j = 1; j <=i; j++)
    {
       cout<<i;
    }
    int space=2*n -2*i;
    for (int j = 1; j <=space; j++)
    {
       cout<<" ";
    }
    for ( int j= 1; j <=i; j++)
    {
        cout<<i;
    }
    cout<<endl;
    
   }


return 0;


}




    


