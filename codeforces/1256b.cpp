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
void swap(int &a, int &b) {
  int temp = a;
  a = b; b= temp;
}

auto main() -> int {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int q; cin >> q; while(q--) {
    int n; cin >> n; vi per(n);
    for(int i = 0; i < n; ++i) cin >> per[i];
    vector<bool> used(n-1, 0);
    for(int j = 0 ; j < n-1; ++j) {
      for(int i = n-2; i >= 0; --i) {
	if(per[i] > per[i+1] && used[i] == 0) {
	  /* cerr << "before swap " << per[i] << ' ' << per[i+1] << endl; */
	  swap(per[i], per[i+1]);
	  /* cerr << "after swap " << per[i] << ' ' << per[i+1] << endl; */
	  used[i] = 1;
	}
      }
    }
    for(int a : per) cout << a << ' '; cout << endl;
  }
  return 0;
}

