#include<stdio.h>
#include<stdlib.h> 
int main(){

    //Take n numbers as input and print dynamically
    //Dynamic Array
    int n;
    scanf("%d",&n);
    int*ptr=(int*)malloc(n*4);
     
     int *p=ptr;
     for(int i=0;i<n;i++){
        scanf("%d",&(*ptr));
        ptr++;  //Pointing to next value to input
                //*ptr++ -> Pointing to next memory location

     }
     for(int i=0;i<n;i++){
        printf("%d",(*p));
        p++;  //Pointing to next value to input
                //*ptr++ -> Pointing to next memory location

     }

}