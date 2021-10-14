#include <stdio.h>
int* bubbleSort (int n, int arr[n]);
int main()
{
    int n, temp;
    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\n The array elements are : \n");
    for (int i = 0; i < n; i ++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr;
    ptr = bubbleSort (n, arr);
    printf("\n The smallest element of the array is %d", *ptr);
    printf("\n The largest element of the array is %d \n", *(ptr + (n - 1)));
    printf("The sorted array is : ");
    for (int i = 0; i < n; i ++)
    {
        printf(" %d ", *(ptr + i));
    }
    return 0;
}
int* bubbleSort (int n, int arr[n])
{
    int temp;
     for (int i = 0; i < n; i ++)
    {
        if (arr[i + 1] < arr[i])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    n = n - 1;
    if (n == 1)
    {
        return arr;
    }
    else
    {
        return bubbleSort (n, arr);
    }
}