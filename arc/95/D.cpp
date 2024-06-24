//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int mx = a[n - 1];
  int mn = INT_MIN;
  for(int i = 0; i < n; i++) {
  	int x = min(a[i], mx - a[i]);
    if(x > mn) {
      mn = a[i];
    }
  }
  cout << mx << " " << mn << "\n";
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a.begin() + 1, a.end());
  int md = (a[n] + 1) / 2;
  int closest = a[0];
  for(int i = 1; i <= n; i++) {
  	if(abs(a[i] - md) < abs(closest - md)) {
  	  closest = a[i];
  	}
  }
  cout << a[n] << " " << closest << "\n";
  return 0;
}

// https://prnt.sc/HtQj-45K_qF1