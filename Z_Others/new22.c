#include<stdio.h>

void primeno(int n){
    int prime[100]={0};
    for (int i = 2; i <=n; i++)
    {
        if(prime[i]==0){
            for (int j = i*i; j <=n; j+=i)
            {
                prime[j]=1;
            }
            
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            printf("%d \n",i);
        }
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    primeno(n);
    
}
