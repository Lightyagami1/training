#include <iostream>
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
  int q; cin >> q;
  while(q--) {
    ll n; cin >> n;
    ll cnt = 0;
    while(n%2 == 0 or  n%3 == 0 or n%5 == 0) {
      // cerr << "currently n is " << n << endl;
      while(n%2 == 0) {n/=2; cnt++;}
      while(n%3 == 0) {n = 2*(n/3); cnt++;}
      while(n%5 == 0) {n = 4*(n/5); cnt++;}
    }
    if(n == 1) {
    cout << cnt << endl;
    } else
      cout << -1 << endl;
  }
  return 0;
}
