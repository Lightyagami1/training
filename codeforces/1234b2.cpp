
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
auto main() -> int {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int x, n, k; cin >> n >> k; bool psnt;
  vi dis(k+1, 0);
  vi ndis(k+1);
  deque<int>q;
  for(int i = 0; i < n; ++i) {
    cin >> x;
    psnt = 0;
    for(int j = 0; j < k; ++j) {
      if(find(q.begin(), q.end(), x) != q.end()) { psnt = 1; break; }
    }
    if(psnt == 0) {
      if(q.size() < k) {
	q.push_back(x);
      } else {
	q.pop_back();
	q.push_back(x);
      }
    }
    /* cerr << "\n at i: " << i << endl; */
    /* for(int j = 0; j < k; ++j) { */
    /*   cerr << dis[j] << ' '; */
    /* } cerr << endl; */
  }
  cout << q.size() << endl;
  for(int i = q.size()-1; i >= 0; --i) {
    cout << q[i] << ' ';
  }

  return 0;
}

