#include<iostream>
using namespace std;

//WAP to check if a no. is a power of 2
int check2power(int n){
    return !(n&(n-1));//and of n and n-1 gives the bit difference of only rightmost set bit which is one
}
//WAP to check number of ones
int checkone(int n){
    int count=0;
    while(n){
        n=n&(n-1);//and of n and n-1 gives the bit difference of only rightmost set bit which is one and no. of steps gives final ans
        count++;
    }
    return count;
}

void subset(int a[],int n){
    for (int i = 0; i < (1<<n); i++)   //(1<<n)=2^n;
    {
        for (int j = 0; j < n; j++)
        {if (i & (1<<j))
        {
            /* code */cout<<a[j]<<"";
        }
        
             cout<<endl;
        }
       
        
    }
    
}
int main(){
// int n;
// cin>>n;
// cout<< check2power(n)<<endl;
// cout<< checkone(n);

int a[5]={1,2,3,4,5};
subset(a,5);
return 0;
}