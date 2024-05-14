//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void print_decimal(vector<int> binary) {
   int dec = 0;
   for(int i = 0; i < 60; i++) {
   	  int bit = binary[i];
      dec = dec += (bit * (1 << i));
   }
   cout << dec << "\n";

}
void print_binary(int n) {
   string binary = "";
   while(n) {
      binary += (n % 2 + '0'); // int to char;
      n /= 2;
   }
   reverse(binary.begin(), binary.end());
   cout << binary << "\n";
}
void solve() {
   int a, b, c; cin >> a >> b >> c;
   int target = __builtin_popcountll(c);
   if(a + b < target) {
   	cout << "-1\n"; return;
   } 
   int x = 0, y = 0;
   for(int bit = 0; bit < 60; bit++) {
      if(1 & (c >> bit)) {
      	if(a > b) {
      	  a--; x |= (1ll << bit);
      	}
      	else {
      	  b--; y |= (1ll << bit);
      	}
      }
   }
   if(a != b) {
   	cout << "-1\n"; return;
   }
   for (int bit = 0; bit < 60 && a > 0; bit++) {
        if (!((c >> bit) & 1)) {
            a--;
            x |= (1ll << bit);
            y |= (1ll << bit);
        }
    }
    if (a > 0) {
        cout << -1 << endl;
        return;
    }
    cout << x << " " << y << "\n";
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