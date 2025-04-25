#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int arr[n];
     printf("Enter elements of array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int pos;
    printf("Enter position to remove\n");
    scanf("%d",&pos);

    if(pos>n || pos<=0){
        printf("Invalid Details \n");
    }

    else{
    for (int i = pos-1; i < n; i++)
    {
        arr[i]=arr[i+1];
    }
    

     printf("Final array is:\n");
    for(int i=0;i<n-1;i++){
       printf("%d ",arr[i]);
    }
    }
    
 

    return 0;
}