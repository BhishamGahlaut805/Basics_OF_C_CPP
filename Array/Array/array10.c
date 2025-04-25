#include <stdio.h>
// Quick Sort
void swap(int*a, int *b)
{
    int temp = *a;
    *a =* b;
    *b = temp;
}

int partition(int A[], int p, int r)
{                 // return the pivot element
                  // Means Element pivot will be at its correct pos after first recursive call
    int x = A[r]; // Pivot ->last element(can be any)
    int i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (A[j] < x)
        {
            i++;
            swap(&A[i],& A[j]);
        }
    }

    // Move pivot before
    swap(&A[i + 1], &A[r]);
    return i + 1;
}
void quicksort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p, r);
        quicksort(A, p, q-1);
        // printf("\nAfter first call :\n");
        // for (int i = 0; i < 11;i++){
        //     printf("%d ", A[i]);
        // }
            quicksort(A, q + 1, r);
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

    quicksort(arr, 0, n - 1);

    printf("Sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}