#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(1)cerr //make me 0 before submitting
#define eb emplace_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

/* this_thread::sleep_for(chrono::milliseconds(400)); */

vector<pair<char, int> > groups(string a) {
  vector<pair<char, int> > fz;
  for(int i = 0; i < a.length() ; ++i) {
    int cnt = 1;
    while(i != a.length()-1) {
      if(a[i] == a[i+1]) {
	i++; cnt++;
      } else {
	break;
      }
    }
    fz.push_back(make_pair(a[i], cnt));
  }
  return fz;
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t; cin >> t;
  while(t--) {
    string t; cin >> t;
    string s; cin >> s;
    bool flag = 0;
    auto tg = groups(t);
    auto sg = groups(s);

    if(tg.size() == sg.size()) {
      for(int i = 0; i < tg.size() ; ++i) {
	if(tg[i].first == sg[i].first && sg[i].second >= tg[i].second)  {
	  flag = 1;
	} else {
	  flag = 0; break;
	}
      }
    }
    cout << (flag ? "YES" : "NO" ) << endl;
  }
  return 0;
}
