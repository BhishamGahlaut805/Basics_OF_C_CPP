#include<stdio.h>
#include<math.h>
int main(){
    
  int n;
  scanf("%d",&n);
  int orgsum=n;
  int sum=0;
  
  // while(orgsum!=0){
  //   int lastdigit=n&10;
  //   sum+= pow(lastdigit,3);
  //   n/=10;
  // }
  for(int i=n%10;i>=0;i-=n/10){
    sum+=pow(i,3);
    
  }
  if(sum==orgsum){
    printf("Yes");
  }
  else{
    printf("no");
  }
    return 0;
}