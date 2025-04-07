#include "bits/stdc++.h"
using namespace std;
#define int long long
#define double long double

void solve(int tc)
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ps[n + 1];
    ps[0] = 0;
    for (int i = 1; i <= n; i++)
        ps[i] = ps[i - 1] + a[i];
    int q;
    cin >> q;
    while (q--)
    {
        int l, u;
        cin >> l >> u;
        int lb = l, rb = n;
        while (lb < rb)
        {
            int mid = (lb + rb + 1) >> 1;
            if (ps[mid] - ps[l - 1] <= u)
                lb = mid;
            else
                rb = mid - 1;
        }
        int maxu = -1e18, optid;
        for (int i = max(l, lb - 2); i <= min(n, lb + 2); i++)
        {
            int t = ps[i] - ps[l - 1];
            int ut = (u + (u - t + 1)) * t / 2;
            if (ut > maxu)
            {
                maxu = ut;
                optid = i;
            }
        }
        cout << optid << " ";
    }
}

signed main()
{
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
        cout << endl;
    }
}