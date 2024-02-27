//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   ll n, k; cin >> n >> k;
   vector<ll> a(n), b(n), x(n);
   vector<pair<ll, ll>> v;
   for(ll i = 0; i < n; i++) {
   	 cin >> a[i] >> b[i];
   	 v.push_back({a[i], b[i]});
   }
   sort(v.begin(), v.end());
   map<ll, ll> mp;
   ll sum = 0;
   for(ll i = 0; i < n; i++) {
   	sum += v[i].second;
   	x.push_back(sum);
   	mp[sum] = v[i].first;
   }
  // for(auto u : mp) cout << u.first << " " << u.second << endl;
  ll id = *(lower_bound(x.begin(), x.end(), k));
  //cout << id << endl;
  cout << mp[id] << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}