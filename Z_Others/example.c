#include<stdio.h>
int main(){
       int n;
       printf("Enter size of pattern");
    scanf("%d",&n);
   //  int space=n+3;
   //  for(int i=n;i>=1;i--){
   //    for(int j=space;j>=1;j--){
   //       printf(" ");
   //    }
   //    for(int k=1;k<=i;k++){
   //       printf(" *");
        
   //    }
   //    printf("\n");
   //     space--;
   //  }    

// for(int i=0;i<n;i++){
//    for(int j=0;j<=i;j++){
//       printf("*");
//    }
// }

int a=0;
int b=1;
int next_term;
for(int i=0;i<=n;i++){
   printf(" %d ",&a);
   next_term=a+b;
   a=b;
   b=next_term;
   
}

    return 0;
    
}