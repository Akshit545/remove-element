#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    ll arr1[n], arr2[n - 1];
    for (int i = 0; i < n; i++)
      cin >> arr1[i];
    for (int i = 0; i < n - 1; i++)
      cin >> arr2[i];
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n - 1);
    ll x1, x2, final = 0;
    if (n == 2)
    {
      x1 = arr2[0] - arr1[0];
      x2 = arr2[0] - arr1[1];
      if (x1 < x2)
      {
        if (x1 > 0)
          final = x1;
        else
          final = x2;
      }
      else
      {
        if (x2 > 0)
          final = x2;
        else
          final = x1;
      }
    }
    x1 = arr2[0] - arr1[1];
    x2 = arr2[1] - arr1[2];
    for (int i = 1; i < n - 1; i++)
    {
      if (x1 == x2)
      {
        final = x2;
        break;
      }
      x1 = arr2[i - 1] - arr1[i - 1];
      x2 = arr2[i] - arr1[i + 1];
      if (x1 == x2)
      {
        final = x2;
        break;
      }
    }
    if (final == 0)
    {
      x1 = arr2[n - 2] - arr1[n - 2];
      x2 = arr2[n - 3] - arr1[n - 3];
      if (x1 == x2)
        final = x2;
    }
    cout << final << endl;
  }
}

/*
1 3 4 8
8 11 15
*/