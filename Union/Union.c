#include<stdio.h>
#include<string.h>
// //Union 1
 typedef union Uni
{
    int a;
    char b;

}uni;
int main(){
 uni ab;
 ab.a=15;
 ab.b='a';
printf("%d\n",ab.a);
printf("%c",ab.b);
   

return 0;
// A=66 
// B=B 
}

//Union2


// union Union1
// {
//     int x;
//     int y;
// }uni1;

// union Union2
// {
//     char x;
//     char y;
// }uni2;

// union Union3
// {
//     int arr[10] ;
//     char y;
// }uni3;


// int main(){
//     printf("Size of Union 1:%d \n",sizeof(uni1));
//     printf("Size of Union 2:%d \n",sizeof(uni2));
//     printf("Size of Union 3:%d \n",sizeof(uni3));

// size of Union 1:4 
// Size of Union 2:1 
// Size of Union 3:40 
// }

//Union 3
