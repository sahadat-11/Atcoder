//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define ll long long
int h[N], dp[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for(int i = 1; i <= n; i++) cin >> h[i];
  for(int i = n; i >= 1; i--) {
    if(i == n) dp[i] = 0;
    else {
      int ans = abs(h[i] - h[i + 1]) + dp[i + 1];
      if(i + 2 <= n) ans = min(ans, abs(h[i] - h[i + 2]) + dp[i + 2]);
      dp[i] = ans;
    }
  }
  //for(int i = n; i >= 1; i--) cout << dp[i] << endl;
  cout << dp[1] << "\n";
  
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define ll long long
int h[N], dp[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for(int i = 1; i <= n; i++) cin >> h[i];
  for(int i = 1; i <= n; i++) {
    if(i == 1) dp[i] = 0;
    else {
      int ans = abs(h[i] - h[i - 1]) + dp[i - 1];
      if(i - 2 >= 1) ans = min(ans, abs(h[i] - h[i - 2]) + dp[i - 2]);
      dp[i] = ans;
    }
  }
  //for(int i = n; i >= 1; i--) cout << dp[i] << endl;
  cout << dp[n] << "\n";
  
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, inf = 1e9;
#define ll long long
int n, h[N], dp[N];
int rec(int i) {
    if(i > n) return inf;
    if(i == n) return 0;
    if(dp[i] != -1) return dp[i];
    int ans = abs(h[i] - h[i + 1]) + rec(i + 1);
    ans = min(ans, abs(h[i] - h[i + 2]) + rec(i + 2));
    return dp[i] = ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> h[i];
  cout << rec(1) << "\n";
  
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, inf = 1e9;
#define ll long long
int n, h[N], dp[N];
int rec(int i) {
    if(i < 1) return inf;
    if(i == 1) return 0;
    if(dp[i] != -1) return dp[i];
    int ans = abs(h[i] - h[i - 1]) + rec(i - 1);
    ans = min(ans, abs(h[i] - h[i - 2]) + rec(i - 2));
    return dp[i] = ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> h[i];
  cout << rec(n) << "\n";
  
  return 0;
}

