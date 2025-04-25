#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //reverse of a no.
    // int n;
    // cout<<"ENTER NUMBER TO BE REVERSED";
    // cin>>n;

    // int reverse=0;
    // while (n>0)
    // {
    //   int lastdigit=n%10;
    //   reverse=reverse*10 + lastdigit;
    //   n=n/10;
    // }
    // cout<<reverse;

    //armstrong number 
    //eg.153 =1^3+ 5^3+ 3^3 == 1+125+27= 153
    int n;
     cout<<"ENTER NUMBER TO BE CHECKED";
     cin>>n;
    int sum=0;

     int originaln=n;
     
     while (n>0)
     {
        int lastdigit=n%10;
      sum+= round(pow(lastdigit,3));
       n=n/10;}
     
     if (sum==originaln)
     {
        cout<<"ARMSTRONG NUMBER"<<endl;

     }
     else
     {
        cout<<"NOT ARMSTRONG NUMBER"<<endl;
     }

    //   int num, originalNum, remainder, result = 0;
    // cout << "Enter a three-digit integer: ";
    // cin >> num;
    // originalNum = num;

    // while (originalNum != 0) {
    //     // remainder contains the last digit
    //     remainder = originalNum % 10;
        
    //     result += remainder * remainder * remainder;
        
    //     // removing last digit from the orignal number
    //     originalNum /= 10;
    // }

    // if (result == num)
    //     cout << num << " is an Armstrong number.";
    // else
    //     cout << num << " is not an Armstrong number.";

    
        
            
            return 0;
        }
