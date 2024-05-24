// inserting of Element in an array
#include <stdio.h>
#include <conio.h>
int main()
{
    int s, i, pos, x;
    printf("Enter Size of array:");
    scanf("%d", &s);
    int arr[s];
    for (i = 0; i < s; i++)
    {
        printf("Enter a%d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter a Number position to delete:");
    scanf("%d", &pos);
    for (i = pos - 1; i < s - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("Array after edit:");
    for (i = 0; i < s - 1; i++)
    {
        printf("\n%d", arr[i]);
    }
    printf("\nEnter a Number position to insert:");
    scanf("%d", &pos);
    printf("\nEnter Number:");
    scanf("%d", &x);

    for (i = s - 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    printf("\nArray after edit:");
    for (i = 0; i < s; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}
