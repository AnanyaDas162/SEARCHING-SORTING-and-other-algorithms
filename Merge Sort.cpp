#include <bits/stdc++.h>
using namespace std;

vector <int> v;
int arr[100];
int k = 0;

void merge(int lb, int mid, int ub){
      int i = lb, j = mid+1;
      k = lb;
      while (i <= mid && j <= ub){
          if (v[i] < v[j]){
              arr[k] = v[i];
              i ++;
          }
          else{
              arr[k] = v[j];
              j ++;
          }
          k ++;
      }    
      if (i <= mid){
          while (i <= mid){
              arr[k] = v[i];
              i ++;
              k ++;
          }
      }
      if (j <= ub){
          while (j <= ub){
              arr[k] = v[j];
              j ++;
              k ++;
          }
      }
    for (int p = lb; p <= ub; p++) {
        v[p] = arr[p];
    }
}

void merge_sort(int lb, int ub){
    if (lb < ub){
        int mid = (lb + ub) / 2;
        merge_sort(lb, mid);
        merge_sort(mid+1, ub);
        merge(lb, mid, ub);
    }
}

int main()
{
    int n,x;
    cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> x;
        v.push_back(x);
    }
    merge_sort(0,n-1);
    for (int i = 0; i < n; i ++){
        cout << arr[i] << " ";
    }
    return 0;
}
