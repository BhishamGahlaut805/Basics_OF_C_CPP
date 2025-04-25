#include<stdio.h>
int getbit(int n,int pos){
    return (((1<<pos)&n)!=0);
    //or return(((n>>pos))&1);
}
int setbit(int n,int pos){
    return((1<<pos)|n);
}
int clearbit(int n, int pos){
    int mask= ~(1<<pos);  //1s complement
    return(n & mask);
}
//update bit =clear bit-->set bit
int updatebit(int n,int pos,int value){
    int mask= ~(1<<pos);
    n=n&mask;
    return((value<<pos)|n);
}
int main(){
    //getbit--> return bit at that position
    //left shift operator make 1 at that pos and its AND with n gives bit at position req.
    printf("%d \n", getbit(5,2));                //5=0101 in binary ans=0
     printf("%d \n", getbit(10,3));            //10= 1010 in binary ans=1
      printf("%d \n", getbit(15,2));            //15=1111  in binary ans=1
       printf("%d \n", getbit(32,4));           //32=100000 in binary  ans=0
         printf("%d \n", getbit(32,0));
         printf("%d \n", getbit(32,8));
                 

        //position= from left most index 0 based indexing

    printf("%d \n",setbit(5,1));       //5=0101-->after making 1 on 1st pos we get 0111=7
    //set bit set 1 on given pos and output result after that
     printf("%d \n",setbit(15,1));              //1111--->1111--->15
      printf("%d \n",setbit(5,3));              //0101--->1101-->13
       printf("%d \n",setbit(10,0));             //1010--->1011-->11


    printf("%d \n",clearbit(5,0));      //5=0101-->0100=4
    //clearbit make 0 on position and return new no.
    printf("%d \n",clearbit(15,1));//1111--->1101=13
    printf("%d \n",clearbit(5,3));//0101-->0101=5
    printf("%d \n",clearbit(10,0));//1010-->1010=10

    printf("%d \n",updatebit(5,1,1)); //5-->0101-->0111=7;
    printf("%d \n",updatebit(15,1,0));//15=1111-->1101=13

    printf("%d \n",updatebit(5,3,1));//0101-->1101=13;
    printf("%d \n",updatebit(10,0,1));//1010-->1011=11

    return 0;
}