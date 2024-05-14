//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, d; cin >> n >> d;
   int cnt = 0;
   while(n--) {
   	int x, y; cin >> x >> y;
   	int dis_square = abs(x) * abs(x) + abs(y) * abs(y);
   	double dis = sqrtl(dis_square);
   	if(dis <= d) cnt++;
   }
   cout << cnt << "\n";
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