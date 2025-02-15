#include<bits/stdc++.h>
using namespace std;


#define ll                  long long
#define ull                 unsigned long long
#define nl                  '\n'
#define ff                  first
#define ss                  second
#define all(x)              x.begin(), x.end()
#define sz(x)               (int)(x).size()
#define pb                  push_back
#define mp                  make_pair


#define nlp(i, n)           for (int i = 0; i < (int)(n); ++i)
#define lp(i, a, b)         for (int i = (int)(a); i <= (int)(b); ++i)
#define rlp(i, a, b)        for (int i = (int)(a); i >= (int)(b); --i)
#define llp(i,a,b)          for (ll i= (ll)(a); i <= (ll)(ll)(b); ++i)


#define pii                 pair<int, int>
#define vi                  vector<int>
#define vll                 vector<ll>
#define vvi                 vector<vector<int>>
#define vvl                 vector<vector<ll>>


#define yes                 cout<<"YES"<<nl
#define no                  cout<<"NO"<<nl
#define dbg(x)              cerr << #x <<" "<< x << endl;


#define PI                  3.141592653589793238
#define INF                 LONG_LONG_MAX
#define MOD                 1e9+7


#define FAST_IO             (ios_base:: sync_with_stdio(false),cin.tie(NULL));

// Maths
ll fact(ll n)          { if(n==0) return 1; ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll nPr(ll n, ll r)     { return fact(n) / fact(n - r); }
ll nCr(ll n, ll r)     { return fact(n) / (fact(r) * fact(n - r)); }
ll gcd(ll a, ll b)     { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)     { return (a * b) / gcd(a, b);}
ll mypow(ll a, ll b)   { ll ans = 1; while(b){ if (b&1) ans = (ans*a) ; b /= 2; a = (a*a); } return ans; }
bool isPrime(ll n)     { if(n <= 1) return false; for(ll i = 2; i <= sqrt(n); i++) if(n % i == 0) return false; return true; }


void solve()
{
    multimap<int,int>m;
    int n;
    cin>>n;
    nlp(i,n)
    {
        int x,y;
        cin>>x>>y;
        if(y%2==0)
            y--;
        m.insert(mp(x+y/2,x));
    }
    auto it=m.begin();
    cout<<it->first<<nl;
}
 
int main()
{
    FAST_IO;
    int TC = 1;
    cin >> TC;
    while (TC--) solve();
}