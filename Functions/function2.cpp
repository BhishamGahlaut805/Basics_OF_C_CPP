#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
//sum of first n natural numbers
// int sum(int n){
//     int k=(n*(n+1))/2 ;
//     return k;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n)<<endl;
// }

//CHECK PYTHAGOREAN TRIPLET
    // bool istriplet( int x, int y,int z)
    // { int b,c;
    //     int a =max(x,max(y,z));
    //   if (a==x)
    //   {
    //     b=y;
    //     c=z;
    //   }
    //   else if (a==y)
    //   {
    //     b=x;
    //     c=z;
    //   }
    //   else{
    //     b=x;
    //     c=y;
    //   }
    //   if (a*a==b*b+c*c)
    //   {
    //     return true;
    //   }
    //   else{
    //     return false;
    //   }  
    // }
    // int main(){
    //     int x,y,z;
    //     cin>>x>>y>>z;
    //     if (istriplet(x,y,z))
    //     {
    //         cout<<"PYTHAGOREAN TRIPLET";
    //     }
    //     else{cout<<"NOT A PYTHAGOREAN TRIPLET";}
    // }

//BINARY NUMBER TO DECIMAL CONVERSION
// int decimal(int n){
//   int ans=0;
//   int x=1;
//   while(n>0){
//     int y=n%10;
//     ans=ans+x*y;
//     x=x*2;
//     n=n/10;
//   }return ans;
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<decimal(n)<<endl;
// }

//product of first n natural numbers
//1*2*3

// int product(int n) {
//   int product =1;
//   for (int i = 2; i <= n; i++)
//   {
//    product*=i;}
//   return product;
 
// }
  
  
// int main(){
// int n;
// cout<<"enter a number "<<endl;
// cin>>n;
// cout<<product(n)<<endl;
// }

//decimal to octal
int decimaltooctal(int n){
  int ans=0;
int x=1;
while(n>0){
int y= n%10;
ans=ans+x*y;
x*=8;
n/=10;
}
return ans;
}
int main(){
  int n;
  cout<<"ENTER  DECIMAL NUMBER"<<endl;
  cin>>n;
  cout<<"OCTAL OF THIS NUMBER IS  "<<decimaltooctal(n)<<endl;
}

// int decimal(int n){
//   int ans=0;
//   int x=1;
//   while(n>0){
//     int y=n%10;
//     ans=ans+x*y;
//     x=x*8;
//     n=n/10;
//   }return ans;
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<decimal(n)<<endl;
// }


