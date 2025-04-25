#include<stdio.h>
#include<stdlib.h>
int main(){

   double*ptr=(double*)malloc(10*sizeof(double)); 
   ptr=realloc(ptr,20*sizeof(double)); //Stores Double the above value
   printf("%p\n",ptr);

   double*ptr1=(double*)calloc(10,sizeof(double)); 
   ptr=realloc(ptr1,20*sizeof(double)); //Stores Double the above value
   printf("%p\n",ptr1);

      double*ptr2=(double*)malloc(10*sizeof(double)); 
   ptr=realloc(ptr2,20000*sizeof(double)); //Stores Double the above value
   printf("%p\n",ptr2);

   double*ptr3=(double*)calloc(10,sizeof(double)); 
   ptr=realloc(ptr3,20000*sizeof(double)); //Stores Double the above value
   printf("%p\n",ptr3);




 
 //Data/Result remains same only the size gets increased in memory
//Data/Result remains same only the size gets increased in memory only if size is incresed by5/10/15 not by 10000/1000/445


    return 0;
}