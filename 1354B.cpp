
/* YangStone Come To Play */
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <conio.h>
#include <algorithm>
using namespace std;

#define RFOR(i, a, b) for (int(i) = (a) - 1; (i) >= (b); --(i))
#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define lg long
#define db double
#define scanv(x)      \
	for (auto &i : x) \
	cin >> i
// #define MOD 998244353
#define dbg(x)         \
	cerr << #x << " "; \
	_print(x);         \
	cerr << endl;
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define dbg(x...)        \
	cerr << #x << " : "; \
	_print(x)
#define uceil(a, b) ((a + b - 1) / (b))
#define dbg(...)
#define RFOR(i, a, b) for (int(i) = (a) - 1; (i) >= (b); --(i))
#define sp << " "
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define srt(x) sort(x.bg, x.ed)
#define printall(a)       \
	for (auto &(i) : (a)) \
	cout << i << ' '
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define nlp(i, n) for (int i = 0; i < (int)(n); ++i)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define vi vector<int>
const int MAXN = 4e5 + 5;
#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL)
// const int mod = 1e9 + 7;
// const int N = 1e5 + 10;
const ll INF = 1e9 + 7;
#define FORALL(i, a) for (auto &(i) : (a))
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
// void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}
int bin_pow(int a, int b, int mod) // luy thua nhi phan
{
	if (b == 0)
		return 1;
	int tmp = bin_pow(a, b / 2, mod);
	if ((b & 1) == false)
	{
		return (tmp * tmp) % mod;
	}
	return (a * (tmp * tmp) % mod) % mod;
}

vector<int> factorize(int n)
{
	vector<int> res;
	for (int i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			res.push_back(i);
			n /= i;
		}
	}
	if (n != 1)
		res.push_back(n);
	return res;
}
//* Delete
/*var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/
bool compare(string &a, string &b)
{
	return a + b > b + a;
}
bool isPerfectSquare(ll n)
{
	ll temp = sqrt(n);

	if (temp * temp == n)
		return true;
	return false;
}
bool check(char r)
{
	return (r == 'a' || r == 'e');
}
bool isPerfectSquare(int n)
{
	int rt = sqrt(n);
	return (rt * rt == n);
}
bool isPrime(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}
ll func(ll n)
{
	ll sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
ll binpow(ll a, ll b)
{
	ll ans = 1ll;
	while (b > 0)
	{
		if (b & 1)
			ans *= a;
		a *= a;
		b >>= 1;
	}
	return ans;
}
#define fr(i,n)             for (ll i=0;i<n;i++)
#define l(s)                s.size()
#define inf                 9e18
void solve()
{
	ll m, n, b, c, d, i, j, k, x, y, z, l, q, r;
	string s, s1, s2, s3, s4;

	ll cnt = 0, cn = 0, ans = inf, sum = 0;
	cin >> s;
	n = l(s);

	set<char> st, ss;
	fr(i, n) st.insert(s[i]);

	vector<pair<char, ll>> v;
	if (st.size() == 3)
	{
		k = 0;
		ll one = 0, two = 0, thre = 0;

		ll pos1 = 0, pos2 = 0, pos3 = 0;

		fr(i, n)
		{
			ss.insert(s[i]);
			if (s[i] == '1')
				one++, pos1 = i;
			if (s[i] == '2')
				two++, pos2 = i;
			if (s[i] == '3')
				thre++, pos3 = i;

			if (ss.size() == 3)
			{
				ll mnpos = min({pos1, pos2, pos3});
				ll mxpos = max({pos1, pos2, pos3});

				ans = min(ans, mxpos - mnpos);
			}
		}

		cout << ans + 1 << endl;
	}
	else
		cout << 0 << endl;
}
int main()
{
	fast_out();
	int t = 1;
	cin >> t;
	wh(t--)
	{

		solve();
		// cout << endl;
	}

	return 0;
}