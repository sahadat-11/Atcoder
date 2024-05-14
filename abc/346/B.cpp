//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b; cin >> a >> b;
   string s = "wbwbwwbwbwbw";
   string t = "";
   for(int i = 0; i < 20; i++) t += s;
   for(int i = 0; i < t.size(); i++) {
   	string sub = t.substr(i, a + b);
   	int cura = 0, curb = 0;
   	for(auto u : sub) {
   	  if(u == 'w') cura++;
   	  else curb++;
   	}
   	if(cura == a and curb == b) {
   	  cout << "Yes\n"; return;
   	}
   }
   cout << "No\n";
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