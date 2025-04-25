#include<stdio.h>
void p(int var){
   // int var=10;
    int*ptr;
    ptr=&var;
    printf("%p\n",ptr);
    printf("%d\n",var);
    printf("%d\n",*ptr);
}

void arrptr(){
    int val[3]={5,12,13};
    int*ptr;
    ptr=val;
    printf("%d %d %d\n",ptr[0],ptr[1],ptr[2]);
}
void arrptr1(){
    int val[3]={5,12,13};
    int*ptr;
    ptr=val;
    for(int i=0;i<3;i++){
        printf("%d\n",*ptr++);
    }
}


int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

// int freq[1000]={0};
// for(int i=0;i<n;i++){
//     freq[arr[i]]++;

// }
// int ans=-1111;
// for(int i=0;i<1000;i++){
//     ans=max(ans,freq[i]);
// }
// printf("%d",ans);
  p(46444 );
  arrptr();
  arrptr1();
}
