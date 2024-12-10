//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s; cin >> s;
	int n = s.size();
	int ans = 0;
	int sub_cnt = (1ll << (n - 1));
	for(int mask = 0; mask < sub_cnt; mask++) {
	    int sum = 0, now = 0;
	    for(int i = 0; i < n; i++) {
	      now = now * 10 + (s[i] - '0');
	      if(mask & (1 << i)) {
	        sum += now;
	        now = 0;
	      }
	   }
	   ans += sum + now;
	}
	cout << ans << "\n";
    return 0;
}