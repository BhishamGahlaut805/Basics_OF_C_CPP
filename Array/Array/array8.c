#include <stdio.h>

int main()
{
    // int n = 10;
    // int arr[10] = {11, 34, 50, 89, 42, 65, 82, 13, 28, 96};
    int n = 6;
    int arr[6] = {36, 34, 50, 89, 42,23};
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", arr[i]);
    // }

    // Selection Sort
    // int minidx;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     minidx = i;
    //     for (int j = minidx + 1; j < n;j++)
    //     {
    //         if (arr[j] < arr[i])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
    //         // printf("\nElements after %d iteration : ", j + 1);
    //         // for (int i = 0; i < 10; i++)
    //         // {
    //         //     printf("%d ", arr[i]);
    //         // }
    //     }
    //     printf("\nElements after %d iteration : ",i+1);
    //     for (int i = 0; i < 10; i++)
    //     {
    //         printf("%d ", arr[i]);
    //     }
    // }
    // printf("\nFinally Sorted Array : \n");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    // Bubble Sort
    // int flag = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     flag = 0;
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //             flag = 1;
    //         }
    //     }
    //     if (flag == 0)
    //     {
    //         break;
    //     }
    //     printf("\nElements after %d iteration : ", i + 1);
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("%d ", arr[i]);
    //     }
    // }
    // printf("\nFinally Sorted Array : \n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    //Insertion sort

    for (int i = 1; i < n;i++){
        int current_value = arr[i];
        int j = i - 1;
        while(arr[j]>current_value && j>=0){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current_value;
            printf("\nElements after %d iteration : ", i );
            for (int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
        }
    

    printf("\nFinally Sorted Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
