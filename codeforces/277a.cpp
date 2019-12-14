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
bool graph[101][101];
vector<bool> visited(101, false);
int n,m; 
void dfs(int curr) {
  cerr << "dfs with " << curr << endl;
  if(visited[curr]) { cerr << "returning\n"; return;}

  visited[curr ] = true;
  for(int l = 0; l < m;l++) {
    if(graph[curr][l]) {
      for(int j = 0; j < n; ++j) {
	if(graph[j][l]){
	  cerr << "dfs in " << j << endl;
	  dfs(j);
	}
      }
    }
  }
}

auto main() -> int {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   cin >>n >> m;
  int cnt0 = 0;
  for (int i = 0; i < n; ++i) {
    int cnt; cin >> cnt;
    if(cnt == 0) cnt0++;
    for(int j = 0;j < cnt;++j) {
      int x; cin >> x;
      x--;
      graph[i][x] = true;
    }
  }

  if(cnt0 == n) cout << n << '\n';
  else {
    int forest = 0;
    for(int i = 0; i < n; ++i) {
      cerr << endl; rep(v, 0, n) cerr<< visited[v]; cerr << endl;
      if(!visited[i]) { 
	dfs(i); 
	forest++;
    cerr << "forest : " << forest  << endl;
      }
    }
    cerr << forest  << endl;
    cout << forest-1 << '\n';
  }

  return 0;
}

