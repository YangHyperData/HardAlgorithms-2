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
//* Delete
/*var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/
bool compare(string &a, string &b)
{
    return a + b > b + a;
}
void solve()
{
    ll n;
    vector <ll> a(50001);
    cin>>n;
        for(ll i=1; i<=n; i++){
            cin>>a[i];
        }
        ll idx1 = 0,idx2 = 0,idx3 = 0,sum = 0,flag = 0;
        sum = a[1]+a[2];
        idx1 = 1,idx2 = 2;
        for(ll i=3; i<=n; i++){
            if(a[i] >= sum){
                idx3 = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout<<idx1<<" "<<idx2<<" "<<idx3<<endl;
        }
        else{
            cout<<-1<<endl;
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