#include<stdio.h>
#include<limits.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

//#include<stdio.h>= Standard Input Output.header file
//#include<conio.h>= console Input Output.header file

int main(){
   int a=INT_MIN;
   int b=INT_MAX;
   float c=10.223323242424424928728;
   double d=10.223323242424424928728;
   double e=10.223323242424424928728;
   long double f1=10.223323242424424928728976870;
   printf("%d\n %d\n %f\n %lf\n %.15f\n",a,b,c,d,e);
   printf("%.25f \n",e);
  // printf("%Ld\n",f1);
    
    int a1=cbrt(10912);
    int a2=sqrt(11913981939);
    printf("%f\n %f \n",a1,a2);





}