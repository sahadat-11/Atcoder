//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3030;
string a, b;
int dp[N][N];
int lcs(int i, int j) {
  if(i >= a.size() or j >= b.size()) return 0;
  if(dp[i][j] != -1) return dp[i][j];
  int ans = lcs(i + 1, j);
  ans = max(ans, lcs(i, j + 1));
  if(a[i] == b[j]) {
    ans = max(ans, lcs(i + 1, j + 1) + 1);
  }
  return dp[i][j] = ans;
} 
void print(int i, int j) {
  if(i >= a.size() or j >= b.size()) return;
  if(a[i] == b[j]) {
    cout << a[i];
    print(i + 1, j + 1);
    return;
  }
  int x = lcs(i + 1, j);
  int y = lcs(i, j + 1);
  if(x >= y) print(i + 1, j);
  else print(i, j + 1);
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> a >> b;
  //cout << lcs(0, 0);
  print(0, 0);
  return 0;
}
// https://prnt.sc/GUd5P8UgQ24F

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3005;
string a, b;
int n, m, dp[N][N]; 
int f(int i, int j) {
  if(i >= n or j >= m) return 0;
  int &ans = dp[i][j];
  if(ans != -1) return ans;
  ans = f(i, j + 1);
  ans = max(ans, f(i + 1, j));
  if(a[i] == b[j]) {
    ans = max(ans, 1 + f(i + 1, j + 1));
  }
  return ans;
}
void print(int i, int j) {
  if(i >= n or j >= m) return;
  if(a[i] == b[j]) {
    cout << a[i];
    print(i + 1, j + 1);
    return;
  }
  int x = f(i, j + 1);
  int y = f(i + 1, j);
  if(x > y) print(i, j + 1);
  else print(i + 1, j);
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> a >> b;
  n = a.size(), m = b.size();
  //cout << f(0, 0);
  print(0, 0);
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7;
int dp[N][N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a, b;
  cin >> a >> b;
  int n = a.size(), m = b.size();
  for (int i = n - 1; i >= 0; i--) {
    for (int j = m - 1; j >= 0; j--) {
      if (a[i] == b[j]) dp[i][j] = dp[i + 1][j + 1] + 1;
      else dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
    }
  }
  int i = 0, j = 0;
  while (i < n && j < m) {
    if (a[i] == b[j]) {
      cout << a[i];
      i++, j++;
    } 
    else if (dp[i][j] == dp[i + 1][j]) i++;
    else j++;
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7;
int dp[N][N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a, b;
  cin >> a >> b;
  int n = a.size(), m = b.size();
  a = '$' + a, b = '$' + b;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (a[i] == b[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
      else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
  }
  //cout << dp[n][m]; // count
  int i = 1, j = 1;
  while (i <= n && j <= m) {
    if (a[i] == b[j]) {
      cout << a[i];
      i++, j++;
    } 
    else if (dp[i][j] == dp[i + 1][j]) i++;
    else j++;
  }
  return 0;
}