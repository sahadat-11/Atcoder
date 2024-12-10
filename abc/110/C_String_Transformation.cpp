//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a, b; cin >> a >> b;
  map<char, int> mp1, mp2;
  for(auto u : a) {
    mp1[u]++;
  }
  for(auto u : b) {
    mp2[u]++;
  }
  vector<int> v1, v2;
  for(auto u : mp1) {
    v1.push_back(u.second);
  }
  for(auto u : mp2) {
    v2.push_back(u.second);
  }
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());
  //for(auto u : v1) cout << u << " "; cout << "\n";
  //for(auto u : v1) cout << u << " "; cout << "\n";
  if(v1 == v2) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}