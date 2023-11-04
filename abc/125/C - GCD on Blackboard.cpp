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
   int ans = 0;
   for(int i = 1; i <= n; i++) {
   	 ans = max(ans, __gcd(left[i - 1], right[i + 1]));
   }
   cout << ans << "\n";
   return 0;
}