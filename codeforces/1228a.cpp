#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(1)cerr //make me 0 before submitting
#define pb push_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define debug(x) cerr << (#x) << ": " << (x) << '\n'
template<class T> ostream& operator<<(ostream& out, vector<T> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }

/* this_thread::sleep_for(chrono::milliseconds(400)); */
auto main() -> int{
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int l, r; cin >> l >> r;
  /* cerr << l << ' ' << r << endl; */
  for(int i = l; i <= r; ++i) {
    /* cerr << "checking " << i << endl; */
    bool found = 1;
    vi freq(10, 0);
    int temp = i;
    while(temp > 0) {
      freq[temp%10]++;
      temp/=10;
    }
    /* cout << freq << endl; */
    for(int ii = 0; ii< 10; ++ii) {
      if(freq[ii] > 1) {
	found = 0;
      }
    }
    /* cerr << found << endl; */
    if(found) {cout << i; return 0; }
  }
  cout << -1;

  return 0;
}

