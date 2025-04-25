// Selection Sort
#include <stdio.h>
void selection_sort(int arr[], int n){
    int minidx;
    for (int i = 0; i < n - 1; i++){
        minidx = i;
        for (int j = minidx + 1; j < n; j++){
            if (arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
    int main(){
        int n;
        printf("Enter the number of elements: ");
        scanf("%d", &n);

        int arr[n];
        printf("Enter the elements:\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        selection_sort(arr, n);

        printf("Sorted array is:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }