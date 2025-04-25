#include<stdio.h>
void tower(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return;
    }
    tower(n - 1, a, c, b);
    printf("Move from %d to %d \n", a, b);
    tower(n - 1, c, b, a);
}
int main()
{
    // towerofhanoi(3,'a','b','c');
    tower(2, 1, 2, 3);
}