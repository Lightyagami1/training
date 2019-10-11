#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(1)cerr //make me 0 before submitting
#define pb push_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

/* this_thread::sleep_for(chrono::milliseconds(400)); */
int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n; cin >> n;
  vi fmap(5003, 0);
  for(int i = 0; i < n; ++i) {
    int t; cin >> t;
    fmap[t] |= 1;
  }
  for(auto i : fmap) cerr << i << ' '; cerr << endl;
  int cnt = 0;
  for(int i = 1; i < n+1; ++i) {
    if(!fmap[i]) cnt++;
  }
  cout << cnt << endl;
  return 0;
}

