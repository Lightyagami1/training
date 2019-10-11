#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(1)cerr //make me 0 before submitting
#define pb push_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

int fmap [27][200005] = {0};
/* this_thread::sleep_for(chrono::milliseconds(400)); */
int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n; string s;
  cin >> n >> s;
  vi p(30, 0);
  for(int i = 0; i < n;++i) {
    p[s[i]-'a'].push_back(i);
    cerr << p[s[i]-'a'] << endl;
  }


  int m; cin >> m;
  while(m--) {
    string fn; cin >> fn;
    cerr << fn << "\n";
  }

  return 0;
}

