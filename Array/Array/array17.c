// Binary Search
#include <stdio.h>
int binary_search(int arr[], int st, int en, int val)
{
    if (st <= en)
    {
        int mid = (st + en) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        else if (arr[mid] > val)
        {
            return binary_search(arr, st, mid - 1, val);
        }
        else
        {
            return binary_search(arr, mid + 1, en, val);
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
    int idx = binary_search(arr, 0, n, val);

    if (idx != -1)
    {
        printf("%d found at index %d", val, idx);
    }
    else
    {
        printf("%d not found in array", val);
    }
}