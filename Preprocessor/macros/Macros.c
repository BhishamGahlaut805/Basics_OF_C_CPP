#include<stdio.h>
#define X 3.141592653589793238462643 //MACROS

#define area(r) (X*r*r)   //MACROS FUNCTION
#define vol(a)   (a*a*a)
int main(){
  printf("%.20f \n",area(10));
  printf("%.120f \n",area(10000));
  printf("%.0f \n",area(1000));
  printf("%lf\n",area(100));
  printf("%f \n",vol(101));

}