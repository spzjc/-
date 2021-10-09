#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ksm(ll a, ll b) {
	ll ans = 1;
	while (b) {
		if (b & 1)ans = ans*a % 1000000007;
		a=a*a % 1000000007; b >>= 1;
	}
	return ans;
}
int main() {
	ll i, j, m, n;
	cin.tie(0);
	ios::sync_with_stdio(false);
		cout.tie(0);
		ll k;
		cin >> k;
		ll ans = 0;
		ll mi = (1ll<<k) - 2;
		ans=ksm(4, mi) % 1000000007;
		cout << 6 * ans%1000000007 << endl;
	
}