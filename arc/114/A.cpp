//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<ll>> subsets(vector<ll>& nums) {
ll n = nums.size();
ll sub_cnt = (1 << n); // (2^n);
vector<vector<ll>> all_subsets;
for(ll mask = 0; mask < sub_cnt; mask++) {
    vector<ll> subset;
    for(ll i = 0; i < n; i++) {
      if(mask & (1 << i)) {
        subset.push_back(nums[i]);
      }
    }
    all_subsets.push_back(subset);
  }
  return all_subsets;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
ll n; cin >> n;
vector<ll> v(n);
for(ll i = 0; i < n; i++) {
	cin >> v[i];
}
ll ans = 1e18;
vector<ll> primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
//for(auto u : primes) cout << u << endl;
auto all_subsets = subsets(primes);
for(auto subset : all_subsets) {
	 //if(subset.size() == 0) continue;
	 ll x = 1;
	 bool flag = true;
	 for(ll ele : subset) {
	 	x *= ele;
	 }
	for(auto u : v) {
	  if((__gcd(x, u) == 1)) {
	  	flag = false;
	  }
	}
	if(flag) {
	  ans = min(ans, x);
	}
	//cout << x << endl;
  }
  cout << ans << "\n";
  return 0;
}

// https://prnt.sc/DItF1cC1fzBf