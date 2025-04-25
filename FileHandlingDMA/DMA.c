#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Memory->Static Memory during compile time
// dynamic memory is allocated during run time
int main()
{

    // printf("INT: %d\n",sizeof(int));
    // printf("BOOL: %d\n",sizeof(bool));
    // printf("FLOAT: %d\n",sizeof(float));
    // printf("DOUBLE: %d\n",sizeof(double));
    // printf("LONG: %d\n",sizeof(long));
    // printf("CHARACTER: %d\n",sizeof(char));
    // printf("LONG DOUBLE: %d\n",sizeof(long double));
    // printf("LONG long: %d\n",sizeof(long long));

    // 1.Malloc->Print garbage value if no value is assigned

    printf("MALLOC \n");
    int *ptr = (int *)malloc(10 * sizeof(int));
    printf("%d \n", *ptr);
    int *ptr1 = (int *)malloc(10 * 4);
    printf("%d \n", *ptr1);
    char *ptr2 = (char *)malloc(10 * sizeof(char));
    *ptr2 = 'a';
    printf("%c \n", *ptr2);
    char *ptr3 = (char *)malloc(10);
    *ptr3 = 'b';
    printf("%c \n", *ptr3);

    int *ptr4 = (int *)malloc(10 * sizeof(int));
    *ptr4 = 13;
    printf("%d \n", *ptr4);

    printf("ptr++ : Original=13 \n");
    ptr4++; // Means value shift by size of the storage eg 4 for int
    // Basically to next unit
    printf("%d \n", *ptr4);
    ptr4++;
    printf("%d \n", *ptr4);
    ptr4++;
    printf("%d \n", *ptr4);
    ptr4++;
    printf("%d \n", *ptr4);
    ptr4++;
    printf("%d \n", *ptr4);

    printf("*ptr++ : Original=13 \n");
    *ptr4++; // INcrease by +1
    printf("%d \n", *ptr4);
    *ptr4++; // INcrease by +1
    printf("%d \n", *ptr4);
    *ptr4++; // INcrease by +1
    printf("%d \n", *ptr4);
    *ptr4++; // INcrease by +1
    printf("%d \n", *ptr4);
    *ptr4++; // INcrease by +1
    printf("%d \n", *ptr4);
    *ptr4++; // INcrease by +1
    printf("%d \n", *ptr4);

    // 2.Calloc-> print 0 if no value is given

    printf("CALLOC \n");
    int *ptr5 = (int *)calloc(10, sizeof(int));
    printf("%d \n", *ptr5);
    int *ptr6 = (int *)calloc(10, 4);
    printf("%d \n", *ptr6);
    char *ptr7 = (char *)calloc(10, sizeof(char));
    *ptr7 = 'a';
    printf("%c \n", *ptr7);
    char *ptr8 = (char *)calloc(10, 1);
    *ptr8 = 'b';
    printf("%c \n", *ptr8);

    int *ptr9 = (int *)calloc(10, sizeof(int));
    *ptr9 = 13;
    printf("%d \n", *ptr9);
}