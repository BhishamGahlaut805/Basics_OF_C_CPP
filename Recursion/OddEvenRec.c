#include<stdio.h>
//WAP to print alternate even/odd using recursion
int odd(int n){  //To print odd number
    return n+1;
}
int even(int n){ //To print even number
    return n-1;
}

void print(int l,int r){
if(l>r){
    return;
}

else if(l%2!=0  ){
    printf("%d ",odd(l));
    if(l<r){               //To print exactly equal count of no.
    printf("%d ",even(l+1));
    }
    print(l+2,r);
}

else {
    printf("%d ",even(l));
    if(l<r){
    printf("%d ",odd(l+1));
    }
    print(l+2,r);
}
}
int main(){
    int l,r;
    printf("Enter lower & Upper Limit:\n");
    scanf("%d %d",&l,&r);
    
   print(l,r);
    return 0;
}