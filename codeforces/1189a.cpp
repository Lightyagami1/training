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
  string s; cin >> s;

  int cnt1 = 0;
  for(auto i : s) {
    if(i == '1') cnt1++;
  }
  /* cerr << "1's are " << cnt1 << endl; */

  if((n & 1) || (n%2 == 0 && cnt1 != n/2)) {
    cout << 1 << '\n' << s << endl;
    return 0;
  }
  if(cnt1 == n/2) {
    cout << 2 << '\n' << s[0] << ' ';
    for(int i = 1; i < n; ++i) cout << s[i];
    cout << endl;
  }

  return 0;
}

