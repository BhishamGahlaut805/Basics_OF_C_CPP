#include<stdio.h>
#include<math.h>
//using namespace std;
int main(){
int n;
     printf("ENTER NUMBER TO BE CHECKED\n");
     scanf("%d",&n);
    int sum=0;

     int originaln=n;
     
     while (n!=0) //or(n>0)
     {
        int lastdigit=n%10;
      sum+= round(pow(lastdigit,3));
       n=n/10;}
     
     if (sum==originaln)
     {
        printf("ARMSTRONG NUMBER");

     }
     else
     {
        printf("NOT ARMSTRONG NUMBER");
     }
return 0;
}
