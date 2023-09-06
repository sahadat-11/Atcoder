//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define ll long long
int n, a[N], b[N], c[N], dp[N][3];
int rec(int i, int last) {
  if(i == n + 1) return 0;
  if(dp[i][last] != -1) return dp[i][last];
  int ans = 0;
  for(int k = 0; k < 3; k++) {
  	if(k == last) continue;
  	if(k == 0) ans = max(ans, a[i] + rec(i + 1, 0));
  	if(k == 1) ans = max(ans, b[i] + rec(i + 1, 1));
  	if(k == 2) ans = max(ans, c[i] + rec(i + 1, 2));
  }
  return dp[i][last] = ans;
} 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n;
  for(int i = 1; i <= n; i++) {
  	cin >> a[i] >> b[i] >> c[i];
  }
  cout << rec(1, -1);
  return 0;
}
//https://prnt.sc/6fFZkId2o4qk

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define ll long long
int n, a[N][3], dp[N][3];
int rec(int i, int last) {
  if(i == n + 1) return 0;
  if(dp[i][last] != -1) return dp[i][last];
  int ans = 0;
  for(int k = 0; k < 3; k++) {
    if(k == last) continue;
    ans = max(ans, a[i][k] + rec(i + 1, k));
  }
  return dp[i][last] = ans;
} 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i][0] >> a[i][1] >> a[i][2];
  }
  cout << rec(1, -1);
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define ll long long
int n, a[N], b[N], c[N], dp[N][3]; 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }
  dp[0][0] = 0, dp[0][1] = 0, dp[0][2] = 0;
  for(int i = 1; i <= n; i++) {
    dp[i][0] = a[i] + max(dp[i - 1][1] , dp[i - 1][2]);
    dp[i][1] = b[i] + max(dp[i - 1][0] , dp[i - 1][2]);
    dp[i][2] = c[i] + max(dp[i - 1][1] , dp[i - 1][0]);
  }
  cout << max(max(dp[n][0], dp[n][1]), dp[n][2]);
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define ll long long
int n, a[N][3], dp[N][3]; 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i][0] >> a[i][1] >> a[i][2];
  }
  dp[0][0] = 0, dp[0][1] = 0, dp[0][2] = 0;
  for(int i = 1; i <= n; i++) {
    dp[i][0] = a[i][0] + max(dp[i - 1][1] , dp[i - 1][2]);
    dp[i][1] = a[i][1] + max(dp[i - 1][0] , dp[i - 1][2]);
    dp[i][2] = a[i][2] + max(dp[i - 1][1] , dp[i - 1][0]);
  }
  cout << max(max(dp[n][0], dp[n][1]), dp[n][2]);
  return 0;
}
