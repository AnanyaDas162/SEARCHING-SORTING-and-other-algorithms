#include <stdio.h>
int input_array (int n);
void insertion_sort (int n, int arr[n]);
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
    insertion_sort (n, arr);
    return arr[0];
}
void insertion_sort (int n, int arr[n])
{
    int index, temp, j;
    for (int i = 0; i < n-1; i ++)
    {
        temp = arr[i + 1];
        //index = i;
        for (j = i; j >= 0; j --)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
                arr[j] = temp;
                index = j;
            }
        }
        //arr[j] = temp;
    }
    print_sortedArray (n, arr);
}
void print_sortedArray (int n, int arr[n])
{
    printf("*******************Insertion Sort***********************");
    printf("\n The sorted array is :");
    for (int i = 0; i < n; i ++)
    {
        printf("\t %d", arr[i]);
    }
}