// Insertion Sort
#include <stdio.h>
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current_value = arr[i];
        int j = i - 1;
        while (arr[j] > current_value && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current_value;
    }
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

    insertion_sort(arr, n);

    printf("Sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}