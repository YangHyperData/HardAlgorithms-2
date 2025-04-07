#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	
	vector<int> cnt(101);
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		++cnt[x];
	}
	
	cout << *max_element(cnt.begin(), cnt.end()) << endl;
	
	return 0;
}