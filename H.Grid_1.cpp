//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7, mod = 1e9 + 7;
string s[N];
int n, m, dp[N][N]; 
int f(int i, int j) {
  if(i >= n or j >= m) return 0;
  if(s[i][j] == '#') return 0;
  if(i == n - 1 and j == m - 1) return 1;
  int &ans = dp[i][j];
  if(ans != -1) return ans;
  ans = f(i, j + 1); // go right
  ans += f(i + 1, j); // go down
  ans %= mod;
  return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  cout << f(0, 0);
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7, mod = 1e9 + 7;
string s[N];
int n, m, dp[N][N]; 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  dp[n - 1][m - 1] = 1;
  for(int i = n - 1; i >= 0; i--) {
  	for(int j = m - 1; j >= 0; j--) {
  		if(i == n - 1 and j == m - 1) continue;
  	  else if(s[i][j] == '#') {
  	  	dp[i][j] = 0; 
  	  }
  		else {
         int op1 = 0;
      int op2 = 0;
      
      if (i + 1 < n) {
        op1 = dp[i+1][j];
      }
      
      if (j + 1 < m) {
        op2 = dp[i][j+1];
      }
      
      dp[i][j] = (op1 + op2) % mod;
  		}	
  	}
  }
  //  for(int i = 0; i < n; i++) {
  //   for(int j = 0; j < m; j++) cout << dp[i][j] << endl;
  // }
  cout << dp[0][0];
 
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7, mod = 1e9 + 7;
string s[N];
int n, m, dp[N][N]; 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  dp[n - 1][m - 1] = 1;
  for(int i = n - 1; i >= 0; i--) {
  	for(int j = m - 1; j >= 0; j--) {
  		if(i == n - 1 and j == m - 1) continue;
  	  else if(s[i][j] == '#') {
  	  	dp[i][j] = 0; 
  	  }
  		else {
         int op1 = 0;
      int op2 = 0;
      
      if (i + 1 < n) {
        op1 = dp[i+1][j];
      }
      
      if (j + 1 < m) {
        op2 = dp[i][j+1];
      }
      
      dp[i][j] = (op1 + op2) % mod;
  		}	
  	}
  }
  //  for(int i = 0; i < n; i++) {
  //   for(int j = 0; j < m; j++) cout << dp[i][j] << endl;
  // }
  cout << dp[0][0];
 
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7, mod = 1e9 + 7;
string s[N];
int n, m, dp[N][N]; 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  dp[0][0] = 1;
  for(int i = 0; i < n; i++) {
  	for(int j = 0; j < m; j++) {
  		if(i == 0 and j == 0) continue;
  	  else if(s[i][j] == '#') {
  	  	dp[i][j] = 0; 
  	  }
  		else {
      int op1 = 0;
      int op2 = 0;

      if (i - 1 >= 0) {
        op1 = dp[i - 1][j];
      }
      
      if (j - 1 >= 0) {
        op2 = dp[i][j - 1];
      }
      
      dp[i][j] = (op1 + op2) % mod;
  		}	
  	}
  }
  //  for(int i = 0; i < n; i++) {
  //   for(int j = 0; j < m; j++) cout << dp[i][j] << endl;
  // }
  cout << dp[n - 1][m - 1];
 
  return 0;
}