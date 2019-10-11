#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(0)cerr
/* this_thread::sleep_for(chrono::milliseconds(400)); */

void dfs(vector<int> adj[], vector<bool> &vis, int cur) {
  vis[cur] = true;
  for(auto i : adj[cur]) {
    if(!vis[i])
      dfs(adj, vis, i);
  }
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n, m; cin >> n >> m;
  if( m != n-1) {cout << "NO\n"; return 0;}

  vector<bool> vis(n, 0);
  vector<int> adj[n];

  for(int i = 0; i < m; ++i) {
    int e1, e2; cin >> e1 >> e2; e1--, e2--;
    adj[e1].push_back(e2);
    adj[e2].push_back(e1);
  }

  int components = 0;
  for(int cur = 0; cur < n; ++cur) {
    if(!vis[cur])
      dfs(adj, vis, cur), components++;
  }

  int cnt = 0; // number of reachable vertexs
  for(auto i : vis) {
    cnt++;
    cerr << i << ' ';
  }
  cerr << endl;
  cerr << components << endl;
  if(components == 1 and cnt == n) //means all are connected in single group
    cout << "YES\n"; 
  else
    cout << "NO\n";
  return 0;
}

