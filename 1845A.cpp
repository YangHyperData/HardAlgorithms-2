#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define lg long
#define db double
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
#define sp << " "
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)
const int mod = 1e9 + 7;

//* Luy Thua Nhi Phan
// int bin_pow(int a,int b,int mod)
// {
//     if(b==0)return 1;
//     int tmp=bin_pow(a,b/2,mod);
//     if((b&1)==false){
//         return (tmp*tmp)%mod;
//     }
//     return (a*(tmp*tmp)%mod)%mod;
// }

void solve()
{
  ll n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;

        for (int i = 0; i < n; i++)
            cout << 1 << " ";
        cout << endl;
    }
    else
    {
        if (k >= 2 and n % 2 == 0)
        {
            cout << "YES" << endl; 
            cout << n / 2 << endl;

            for (int i = 0; i < n / 2; i++)
                cout << 2 << " ";
            cout << endl;
        }
        else if (k >= 3)
        {
            cout << "YES\n";
            cout << n / 2 << endl << 3 << " ";
            for (int i = 1; i < n / 2; i++)
                cout << 2 << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }

}

int main()
{
  fast_out();
  int t ;
  cin >> t;
  wh(t--)
  {
    solve();
  }
}