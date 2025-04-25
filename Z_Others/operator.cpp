#include<iostream>
using namespace std;

// Using operator in c++ incrementor/decrementor increase or decrease by 1
// pre incrementor first increase the value then use 
// post incrementor first use the value AS it is after that increase or decrease
// same in case of decrementor

int main(){
 /*   int i=10;
        //11    //11    //11    //11
    int i= ++i + i++ - --i + i--;
    cout<<i<<endl;//10*/


    int i=1, j=2,k=3,m;
    //1     //2    //2  //2   //2   //0   //3   //1     //=7
    m= i++ + j-- + --k + k++ - i-- - --j + k++ - i-- ;
    cout<<i<<endl;//0
    cout<<j<<endl;//0
    cout<<k<<endl;//4
    cout<<m<<endl;//7

    return 0;







}