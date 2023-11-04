//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int mx = 0;
   for(int i = 0; i < n; i++) {
     int gcd = 0;
     for(int j = 0; j < n; j++) {
       if(i == j) continue;
       gcd = __gcd(gcd, a[j]);
      // cout << gcd << endl;
     }
     mx = max(mx, gcd);
   }
   cout << mx << "\n";
   return 0;
}
// O(n * n);

 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n + 1];
   for(int i = 1; i <= n; i++) cin >> a[i];
   int left[n + 2] = {0}, right[n + 2] = {0};
   for(int i = 1; i <= n; i++) {
     left[i] = __gcd(left[i - 1], a[i]);
   }
   for(int i = n; i >= 1; i--) {
     right[i] = __gcd(right[i + 1], a[i]);
   }
   // for(int i = 1; i <= n; i++) {
   //   cout << left[i] << " ";
   // }
   // cout << "\n";
   // for(int i = 1; i <= n; i++) {
   //   cout << right[i] << " ";
   // }
   int ans = 0;
   for(int i = 1; i <= n; i++) {
     ans = max(ans, __gcd(left[i - 1], right[i + 1]));
     //cout << ans << "\n";
   }
   cout << ans << "\n";
   return 0;
}
//https://prnt.sc/TEEcXM7quVZI
