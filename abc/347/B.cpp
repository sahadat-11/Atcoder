//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   set<string> st;
   for(int i = 0; i < n; i++) {
   	string substr;
   	for(int j = i; j < n; j++) {
   	  substr.push_back(s[j]);
   	  st.insert(substr);
   	}
   }
   cout << (int)st.size() << "\n";
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