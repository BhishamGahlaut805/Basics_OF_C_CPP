//Linear Search
#include<stdio.h>
int linear_search(int arr[],int n,int val){
    for (int i = 0; i < n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int val;
    printf("Enter the Value to search : ");
    scanf("%d", &val);
    int idx = linear_search(arr, n, val);

    if (idx!=-1)
    {
        printf("%d found at index %d", val, idx);
   }
   else{
       printf("%d not found in array", val);
   }

}