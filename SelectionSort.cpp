#include <bits/stdc++.h>
using namespace std;
void selection_sort (int n, int arr[100], int pass);
int main()
{
    int n,pass = 0;
    cout << "Enter the number of elements :" << endl;
    cin >> n;
    cout << "The array elements are" << endl;
    int arr[100];
    for (int i = 0; i < n; i ++)
    {
        cin >> arr[i];
    }
    selection_sort (n, arr, pass);
}
void selection_sort (int n, int arr[100], int pass)
{
    int min = arr[0], index = 0;
    for (int i = 0; i < n-1; i ++)
    {
        pass ++;
        min = arr[i];
        index = i;
        for (int j= i; j < n; j ++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }
        swap (arr[i], arr[index]);
        cout << "\nThe array elements are after pass no"<< pass << endl;
         for (int i = 0; i < n; i ++)
        {
            cout <<"\t" << arr[i];
        }
    }
}