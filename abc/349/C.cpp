//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string a, b; cin >> a >> b;
   for(int i = 0; i < (int)b.size(); i++) {
   	b[i] = tolower(b[i]);
   }
   string x; int j = 0;
   for(int i = 0; i < (int)a.size(); i++) {
   	if(a[i] == b[j]) {
   	  x.push_back(a[i]); j++;
   	}
   }
   if((int)b.size() > (int)x.size()) {
   	x.push_back('x');
   }
   //cout << b <<  " " << x;
   if(x == b) cout << "Yes\n";
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