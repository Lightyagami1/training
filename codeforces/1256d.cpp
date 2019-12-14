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
void swap(bool &a, bool &b) {
  bool temp = a;
  a = b; b = temp;
}

auto main() -> int {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int q; cin >> q; while(q--) {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<bool> ss;
    for(char c : s) {
      if(c == '1') ss.push_back(1);
      else ss.push_back(0);
    }
    bool done = false;
    while(k && !done) {
      bool set1, set0; set0 = set1 = false;
      int first0, first1; first1 = first0 = INT_MAX;
      for(int i = 0; i< n; ++i) {
	if(ss[i] == 1 && set1 == false) {
	  set1 = true; first1 = i;
	}
	else if(ss[i] == 0 && set0 == false && i > first1) {
	  set0 = true; first0 = i;
	}

	cerr << "swap bef";
      if(first0 != INT_MAX and first1 != INT_MAX and k-abs(first0-first1) >= 0)  {
	swap(ss[first0], ss[first1]);
	k -= abs(first0 - first1);
	break;
      }
	cerr << "swap aft";
      }
      if(first0 == INT_MAX or first1 == INT_MAX) {
	done = true;
	break;
      }
    }

    for(bool b : ss) cout << b; cout << endl;
  }

  return 0;
}

