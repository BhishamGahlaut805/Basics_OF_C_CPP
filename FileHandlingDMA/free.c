//Memory deallocation using free in C
#include<stdio.h>
#include<stdlib.h>
int main(){

    // int x=9;
    // int*ptr=&x;
    // int*ptr1=NULL;
    // printf("%p\n",ptr);
    // printf("%p\n",ptr1);

//     0061FF14
//     00000000 special address NULL pointer
int*ptr= (int*)calloc(10,4);
int*p=ptr; //reserving our head value of ptr

ptr--;
free(p); //FREE POinter
}