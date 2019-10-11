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
  for(int sc = 1; sc <= t; ++sc) {
    int tot, frnd; cin >> tot >> frnd;
    vi f(frnd);
    rep(i, 0, frnd) cin >> f[i];

    sort(f.rbegin(), f.rend());

    rep(i, 0, frnd) cerr << f[i] << ' '; cerr << endl;

    int i, cur; cur = i = 0;
    while(cur < tot and i < frnd) {
      cerr << ">> " << cur << " taking in " << f[i] << "== from " << i << endl;
      cur += f[i];
      i++;
    }

    cout << "Scenario #" <<sc << ":\n";
    if(cur >= tot) cout << i;
    else cout << "impossible";
    cout << endl;
  }

  return 0;
}
