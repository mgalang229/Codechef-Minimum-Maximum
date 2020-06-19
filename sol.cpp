#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e5;
long long a[mxN], n;

void decode() {
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	long long mn = INT_MAX;
	for(int i = 0; i < n; ++i) {
		mn = min(mn, a[i]);
	}
	long long cnt = 0;
	for(int i = 0; i < n; ++i) {
		if(a[i] == mn) continue;
		else {
			cnt++;
		}
	}
	cout << mn * cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
