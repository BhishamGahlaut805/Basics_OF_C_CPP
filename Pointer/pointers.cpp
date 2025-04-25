#include<iostream>
using namespace std;

int main(){
    //pointers ---> data type which hold the value of other variable
    int a=100;
    int*b;  //or int*b=&a ----> same meaning
    b=&a;
    //& ---> (address of ) operator---> to tell address

    cout<<" address of a is "<<&a<<endl;
    cout<<" address of a is "<<b<<endl;

    //*---> (value at) dereference operator
    cout<<" the value at address b is "<<*b<<endl;

    // pointer to pointer
    int**c=&b;
     cout<<" address of b is "<<&b<<endl;
    cout<<" address of b is "<<c<<endl;

    cout<<" the value at address b is "<<**c<<endl;

     int***d=&c;
     cout<<" address of c is "<<&c<<endl;
    cout<<" address of c is "<<d<<endl;

    cout<<" the value at address c is "<<***d<<endl;

     int****e=&d;
     cout<<" address of d is "<<&d<<endl;
    cout<<" address of d is "<<e<<endl;

    cout<<" the value at address d is "<<****e<<endl;
//     output 
//                       ^
//  address of a is 0x61ff08
//  address of a is 0x61ff08
//  the value at address b is 100
//  address of b is 0x61ff04
//  address of b is 0x61ff04
//  the value at address b is 100
//  address of c is 0x61ff00
//  address of c is 0x61ff00
//  the value at address c is 100
//  address of d is 0x61fefc
//  address of d is 0x61fefc
//  the value at address d is 100

// [Done] exited with code=0 in 0.849 seconds
return 0;
}