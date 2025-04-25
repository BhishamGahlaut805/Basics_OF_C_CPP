#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
long long dec_convert(int n, int base)
{
  string result = "";
  while (n > 0)
  {
    long long k = n % base;
    result += k;
    n = n / base;
  }
  long long ans = std::stoll(result);
  return ans;
}
int main(){
 long long n;
 cin>>n;
 cout << dec_convert(n,2);

 // int orgsum=n;
 // int sum=0;

 // while(orgsum!=0){
 //   int l=n&10;
 //   sum+= l*l*l;
 //   n/=10;
 // }
 // if(sum==orgsum){
 //   cout<<"1";
 // }
 // else{
 //   cout<<"0";
 // }
 return 0;
}