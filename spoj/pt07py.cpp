#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
//#define cerr if(0)cerr
/* this_thread::sleep_for(chrono::milliseconds(400)); */

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n, m; cin >> n >> m;
  if( n != m-1) {cout << "NO\n"; return 0;}

  vector<pair<int, int> >edge(m);
  for(int i = 0; i < n; ++i) {
    int e1, e2; cin >> e1 >> e2;
    if(e1 == e2) {cout << "NO\n"; return 0;}

    if(e1 > e2) {int temp = e1; e1 = e2; e2 = temp;}//sorted 1st edge smaller
    if(find(edge.begin(), edge.end(), make_pair( e1, e2 )) != edge.end()) {
      cout << "NO\n"; return 0;
    }

  }
  cout << "YES\n";
  return 0;
}

