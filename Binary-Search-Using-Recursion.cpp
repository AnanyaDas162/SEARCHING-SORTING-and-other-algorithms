#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int>v, int l, int r, int x)
{
    int mid;
    if (r >= l)
    {
        mid = (l+r)/2;
    }
   int y;
   if (l > r)
   {
      y = 0;
   }
   else if (v[mid] == x)
   {
      y = mid;
   }
   else if (v[mid] > x)
   {
      r = mid-1;
      return binary_search(v, l, r, x);
   }
   else if (v[mid] < x)
   {
      l = mid+1;
      return binary_search(v, l, r, x);
   }
   return y;
}
int main()
{
   vector<int>v;
   int n, i, x, l, r;
   cout << "Enter the number of elements :: " << endl;
   cin >> n;
   cout << "Enter the elements :: " << endl;
   for (i = 0; i < n; i ++)
   {
       cin >> x;
       v.push_back(x);
   }
   sort(v.begin(), v.end());
   cout<< "Enter the element to be searched ::" << endl;
   cin >> x;
   //cout << x;
   if (n != 0)
   { 
      l = 0;
      r = v.size()-1;
   }
   int result = binary_search(v,l,r,x);
   if (result == 0)
   {
      cout << "Element NOT found"<< endl;
   }
   else
   {
      cout << "Found"<< endl;
   }
   return 0;
}
