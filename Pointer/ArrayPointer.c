#include<stdio.h>
void arrptr(){
    int val[10]={1,2,3,4,5,6,7,8,9,10};
    int*ptr;
    ptr=val;
    printf("%d %d %d %d %d %d %d %d %d %d\n",ptr[0],ptr[2],ptr[3],ptr[4],ptr[5],ptr[6],ptr[7],ptr[8],ptr[9],ptr[1]);

}
void arrptr1(){
    int val[10]={1,2,3,4,5,6,7,8,9,10};
    int*ptr;
    ptr=val;
    for(int i=0;i<10;i++){
        printf("%d ",*ptr++);
    }

}
int main(){
arrptr();
arrptr1();

}