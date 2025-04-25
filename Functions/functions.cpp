#include<iostream>
#include<math.h>
using namespace std;

// //printing no. using functions

// void display(int a)
// {
// cout<<a<<endl;
// return;
// }

// int main(){
//     int a;
//     cin>>a;

//   display(a);
//     return 0;
// }

// TO PRINT PRIME NO. BETW. 2 NUMBERS

bool isPrime(int num){

for (int i = 2; i <=sqrt(num); i++)
{
   if (num%i==0)
   {
    return false;
   }
   }
   return true;
} 
//simply work of afunction define above the function as use in code as it is 
// no need to define the function again .and you go bingo !!

int main(){
int a,b;
cout<<"ENTER two numbers";
cin>>a>>b;

    
for (int i = a; i <=b; i++)
if (isPrime(i))
{
    cout<<i<<endl;
}
}

