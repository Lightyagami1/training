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
  vi num(n);
  for(int i = 0; i < n; ++i) {
    cin >> num[i];
  }

  sort(num.rbegin(), num.rend());
  for(auto i : num) { cerr << i << ' '; } cerr << endl;

  if(num[0] >= num[1]+num[2]) {
    cout << "NO\n"; return 0;
  }

  cout << "YES\n";
  cout <<  num[2] << ' ' << num[0] << ' ' << num[1];
  for(int i = 3; i < n; ++i) {
    cout << ' ' << num[i];
  }
  cout << endl;

  return 0;
}

