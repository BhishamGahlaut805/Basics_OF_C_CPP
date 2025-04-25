#include<iostream>
using namespace std;
//1.program to find how many numbers are divisible btw 1 to n are divisible by any 2 numbers (like 5and 7) but not both using INCLUSION EXCLUSION PRINCIPLE
int divide(int n,int a,int b){
    int cnt1=n/a; //finding div by a

    int cnt2=n/b;
    int cnt3=n/(a*b); //subtracting commons
    return cnt1+cnt2 -cnt3;

}
//To find GCD/HCF using euclid algorithm
/* APPROACH dividing 2 numbers till we get reminder 0 
eg.
 44,18
 44%18=8;
    18%8=2;
       8%2=0;
       ----> gcd is 2 because rem is 0
*/
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;

}

int main(){
// int n,a,b;
// cout<<"Enter number,divisor1, divisor2"<<endl;
// cin>>n>>a>>b;
//cout<<divide(n,a,b);
int a,b;
cin>>a>>b;
cout<<gcd(a,b);
return 0;
}