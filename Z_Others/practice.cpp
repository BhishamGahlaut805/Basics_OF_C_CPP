#include<iostream>
#include<math.h>

using namespace std;

//1.A person is elligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is elligible to vote.

// bool vote(int n){
//     if (n>=18)
//     {
//        return true;
//     }
//     else
//     {
//         return false;
//     }
    
// }
// int main(){
//     int age;
//     cout<<"ENTER YOUR AGE "<<endl;
//     cin>>age;
//     if (vote(age))
//     {
//        cout<<"YOU CAN VOTE!!" ;
//     }
//     else
//     {
//         cout<<"YOU CAN'T VOTE!!";
//     }
    
// }

//2.Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.
// int number(int a, int b, int c){
//    if (a>b)
//    {
//     if (a>c)
//     {
//         return a;
//     }
//     else
//     {
//         return c;
//     }
//    }
//      if (b>a)
//     {
//       if (b>c)
//       {
//         return b;
//       }
       
//     else{
//     return c;}
  
// }
// }
// int main(){
//     int a, b,c;
//     cout<<"ENTER 3 NUMBERS "<<endl;
//     cin>>a>>b>>c;
//     cout<<"MAX. OF 3 NUMBERS IS "<<number(a,b,c)<<endl;
// }

//3.binary to decimal conversion
/*
int binaryToDecimal(int n) 
{ 
   
    int dec_value = 0; 
  
    // Initializing base value to 1, i.e 2^0 
    int base = 1; 
  
     
    while (n) { 
        int last_digit = n % 10; 
        n = n / 10; 
  
        dec_value += last_digit * base; 
  
        base = base * 2; 
    } 
  
    return dec_value; 
} 
int main(){
  int n;
  cout<<"ENTER BINARY NUMBER "<<endl;
  cin>>n;
  cout<<"DECIMAL NUMBER OF THIS BINARY IS "<<binaryToDecimal(n)<<endl;
}*/

// //4.PRINT PRIME NUMBERS
// bool prime(int num){
//   for (int i = 2; i <= sqrt(num); i++)
//   {
//    if (num%i==0)
//    {
//    return false;
//    }
   
//   }
  
//   return true;
// }
  
//   int main(){
//     int a; int b;
//     cin>>a>>b;
//     for (int i = a; i <=b; i++)
//     {
//     if (prime(i))
//     {
//       cout<<i <<"\n"<<endl;

//     }
    
//     }
    
//   }
// //function for gp
// void printgp(int a, int n, int r){
// int current_term;
// for (int i = 0; i <n; i++)
// {
//   current_term=a* pow(r,i);
//   cout<<current_term<<" ";
// }
// return;
// }
//   int main(){
//     int a,n,r;
//     cout<<"ENTER FIRST TERM OF GP  "; cin>>a;
//     cout<<"ENTER NUMBER OF TERMS OF GP  ";cin>>n;
//      cout<<"ENTER COMMON RATIO OF GP  "; cin>>r;

//      printgp(a,n,r);
//   }



//function for ap
void printgp(int a, int n, int d){
int current_term;
for (int i = 1; i <=n; i++)
{
  current_term=a+(i-1)*d;
  cout<<current_term<<" ";
}
return;
}
  int main(){
    int a,n,d;
    cout<<"ENTER FIRST TERM OF AP  "; cin>>a;
    cout<<"ENTER NUMBER OF TERMS OF AP  ";cin>>n;
     cout<<"ENTER COMMON DIFFERENCE OF AP  "; cin>>d;

     printgp(a,n,d);
  }



