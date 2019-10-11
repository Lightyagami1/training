#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(1)cerr //make me 0 before submitting
#define eb emplace_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

/* this_thread::sleep_for(chrono::milliseconds(400)); */
int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vi no(n);
    for(int i = 0; i < n; ++i) cin >> no[i];

    // set approach worst case O(n^2), timeout online judge
    ll ans = 0;
    set<int> t;
    t.insert(no[0]);
    for(int i = 1; i < n; ++i) {
      t.insert(no[i]);
      set<int>::iterator ii = t.upper_bound(no[i]);
      ans += distance(ii,t.end());
    }
    cout << ans << endl;
  }
  return 0;
}
