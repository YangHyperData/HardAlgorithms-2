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
#define vll vector<ll>
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
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

// loai ki tu
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

void solve()
{
    ll n; cin>>n;
    vector <int> a(n),b,c;
    map<int,int> mp;
    int e=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0) e++;
        mp[a[i]]++;
    }
    if(mp.sz==1) cout<<-1 nl;
    else 
    {
        sort(all(a));
        b.push_back(a[0]);
        int p;
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1]) b.push_back(a[i]);
            else 
            {
                p=i;
                break;
            }
        }
        for(int i=p;i<n;i++)
        {
            c.push_back(a[i]);
        }
        cout<<b.sz <<" "<< c.sz nl;
        for(auto x : b) cout<<x<<" ";
        cout nl;
        for(auto x : c) cout<<x<<" ";
        cout nl;
    }
}
int main()
{
    fast_out();
    int t = 1;
    cin >> t;
    wh(t--)
    {
        solve();
    }
    return 0;
}