#include <stdio.h>
int input_array (int n);
void bubble_sort (int n, int arr[n]);
void print_sortedArray (int n, int arr[n]);
int main()
{
    int n;
    printf("\n Enter the number of elements : ");
    scanf("%d", &n);
    int a = input_array(n);
    return 0;
}
int input_array (int n)
{
    int arr[n];
    printf("\n The array elements are : ");
    for (int i = 0; i < n; i ++)
    {
        scanf("%d", &arr[i]);
    }
    bubble_sort (n, arr);
    return arr[0];
}
void bubble_sort (int n, int arr[n])
{
    int temp, sort;
    for (int i = 0; i < n - 1; i ++)
    {
        sort = 0;
        for (int j = 0; j < n-i-1; j ++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sort = 1;
            }
        }
        if (sort == 0)
        {
            break;
        }
    }
    print_sortedArray (n, arr);
}
void print_sortedArray (int n, int arr[n])
{
    printf("\n The sorted array is :");
    for (int i = 0; i < n; i ++)
    {
        printf("\t %d", arr[i]);
    }
}