//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int a, b; cin >> a >> b;
   if(a > 0 and b > 0) {
     cout << "Positive\n";
   }
   else if(a < 0 and b < 0) {
   	 int dis = abs(a - b) + 1;
   	 if(dis % 2 == 0) cout << "Positive";
   	 else cout << "Negative\n";
   }
   else cout << "Zero";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   string a, b; cin >> a >> b;
   int j = 0;
   for(int i = 0; i < n; i++) {
   	if(a[i] == b[j]) {
   	  j++;
   	}
   }
   cout << 2 * n - j;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1, cs = 0; 
  //cin >> t;
  while(t--) {
    //cout << "Case " << ++ cs << ": ";
    solve();
  }
  return 0;
}