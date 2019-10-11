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
  int q; cin >> q;
  while(q--) {
    int n, k; cin >> n >> k;
    vi inp(n);
    ll sum = 0;
    for(int i = 0; i < n; ++i) {
      cin >> inp[i];
      sum += inp[i];
    }

    if(k % 2 != sum % 2) {
      cout << "NO\n";
      continue;
    }

    vi ind;
    for(int i = 0; i < n; ++i) {
      if(ind.size() < k-1 && inp[i] % 2 == 1)
	ind.push_back(i+1);
    }

    if(ind.size() < k-1)
      cout << "NO\n";
    else {
      cout << "YES\n";
      for(auto i : ind) {
	cout << i << ' ';
      }
      cout << n << endl;
    }
  }
  return 0;
}
