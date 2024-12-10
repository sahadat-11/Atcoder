//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> subsets(vector<int>& nums) {
int n = nums.size();
int sub_cnt = (1 << n); // (2^n);
vector<vector<int>> all_subsets;
for(int mask = 0; mask < sub_cnt; mask++) {
    vector<int> subset;
    for(int i = 0; i < n; i++) {
      if(mask & (1 << i)) {
        subset.push_back(nums[i]);
      }
    }
    all_subsets.push_back(subset);
  }
  return all_subsets;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> p{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43,47};
  auto all_subsets = subsets(p);
  int ans = 1e18;
  for(auto subset : all_subsets) {
    int x = 1;
    //if(subset.size() == 0) continue;
    for(int ele : subset) {
      x *= ele;
    }
    bool flag = true;
    for(int i = 0; i < n; i++) {
      if(__gcd(x, a[i]) == 1) {
        flag = false;
      }
    }
    if(flag) {
      ans = min(ans, x);
    }
  }
  cout << ans << "\n";
  return 0;
}