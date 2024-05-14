//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s; 
   map<char, int> mp;
   vector<int> ans;
   for(auto u : s) mp[u]++;
   for(auto u : mp) {
   	ans.push_back(u.second);
   }
   sort(ans.begin(), ans.end());
   //for(auto u : ans) cout << u << " ";
   int n = ans.size();
   bool flag = true;
   if(n & 1) {
     flag = false;
   }
   vector<bool> used(104, false);
   for(int i = 0; i < n; i += 2) {
   	if(ans[i] != ans[i + 1] or used[ans[i]]) {
   	 flag = false;
   	}
   	used[ans[i]] = true;
   }
   if(flag) cout << "Yes\n";
   else cout << "No\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}