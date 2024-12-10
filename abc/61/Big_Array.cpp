//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  vector<int> a(n), b(n);
  vector<pair<int, int>> p;
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    p.push_back({a[i], b[i]});
  }
  sort(p.begin(), p.end());
  int sum = 0;
  vector<int> x;
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    sum += p[i].second;
    x.push_back(sum);
    mp[sum] = p[i].first;
  }
  int id = *lower_bound(x.begin(), x.end(), k);
  cout << mp[id] << "\n";
  return 0;
}