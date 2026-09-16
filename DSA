#include <stdio.h>

int main()
{
    int array[100];
    int n, position, i;

    printf("Enter your array size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100)
    {
        printf("Invalid array size. Enter a value from 1 to 100.\n");
        return 1;
    }

    printf("Enter your array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to delete : ");
    if (scanf("%d", &position) != 1 || position < 1 || position > n)
    {
        printf("Invalid position. Enter a value from 1 to %d.\n", n);
        return 1;
    }

    for (i = position - 1; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }
    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
