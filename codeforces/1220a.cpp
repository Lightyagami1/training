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
  int n; cin >> n;
  string s; cin >> s;
  int cntz, cntn;
  cntn = cntz = 0;
  for(char i : s) {
    if(i == 'z') cntz ++;
    else if (i == 'n') cntn ++;
  }
  vi temp;
  for(int i = 0; i < cntn; ++i) {
    temp.push_back(1);
  }
  for(int i = 0; i < cntz; ++i) {
    temp.push_back(0);
  }
  for(int i = 0; i < temp.size(); ++i)
    if(i == temp.size() -1 ) cout << temp[i];
    else cout << temp[i] << ' ';

  return 0;
}

