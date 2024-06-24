//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N][4];
int a[N], b[N], c[N], n;

int func(int i, int pre) {
  if(i == n + 1) return 0;
  if(dp[i][pre] != -1) return dp[i][pre];
  int ans = 0;
  for(int j = 1; j <= 3; j++) {
    if(j != pre) {
      if(j == 1) ans = max(ans, func(i + 1, j) + a[i]);
      if(j == 2) ans = max(ans, func(i + 1, j) + b[i]);
      if(j == 3) ans = max(ans, func(i + 1, j) + c[i]);
    }
  }
  dp[i][pre] = ans;
  return dp[i][pre];
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  } 
  cout << func(1, 0) << "\n";
  
  return 0;
}

// n to 1;


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N][4];
int a[N], b[N], c[N], n;

int func(int i, int pre) {
  if(i == 0) return 0;
  if(dp[i][pre] != -1) return dp[i][pre];
  int ans = 0;
  for(int j = 1; j <= 3; j++) {
    if(j != pre) {
      if(j == 1) ans = max(ans, func(i - 1, j) + a[i]);
      if(j == 2) ans = max(ans, func(i - 1, j) + b[i]);
      if(j == 3) ans = max(ans, func(i - 1, j) + c[i]);
    }
  }
  dp[i][pre] = ans;
  return dp[i][pre];
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  } 
  cout << func(n, 0) << "\n";
  
  return 0;
}

// 1 to n;


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N][4];
int a[N], b[N], c[N], n;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  } 
  
  dp[0][1] = 0, dp[0][2] = 0, dp[0][2] = 0;

  for(int i = 1; i <= n; i++) {
    dp[i][1] = a[i] + max(dp[i - 1][2] , dp[i - 1][3]);
    dp[i][2] = b[i] + max(dp[i - 1][1] , dp[i - 1][3]);
    dp[i][3] = c[i] + max(dp[i - 1][1] , dp[i - 1][2]);
  }
  cout << max(max(dp[n][1], dp[n][2]), dp[n][3]);
  return 0;
}

// 1 to n;


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N][4];
int a[N], b[N], c[N], n;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  } 
  
  //dp[n + 1][1] = 0, dp[n + 1][2] = 0, dp[n + 1][2] = 0; // it works default for global declaration

  for(int i = n; i >= 1; i--) {
    dp[i][1] = a[i] + max(dp[i + 1][2] , dp[i + 1][3]);
    dp[i][2] = b[i] + max(dp[i + 1][1] , dp[i + 1][3]);
    dp[i][3] = c[i] + max(dp[i + 1][1] , dp[i + 1][2]);
  }
  cout << max(max(dp[1][1], dp[1][2]), dp[1][3]);
  return 0;
}

// n to 1


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


// https://prnt.sc/6fFZkId2o4qk
