#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(true)cerr

/* this_thread::sleep_for(chrono::milliseconds(400)); */
int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n;
  while(cin >> n) {
    if(n == 0) break;
    vi cars(n);
    stack<int> temp;
    for(int i = 0; i < n; ++i) cin >> cars[i];

    int cur = 1;
    bool f = true;
    for(int i = 0; i < cars.size(); ++i) {
      cerr << " ---> in " << cars[i] << ' ' << "cur val:"<< cur << endl;
      if(cars[i] > cur) {
	if(temp.empty()) {
	  temp.push(cars[i]);
	}
	else if (temp.top() > cars[i]) {
	cerr << " ^_^ cur top " << temp.top() << endl;
	  cerr << "COMPARING " << temp.top() << ' ' << cars[i] << endl;
	  temp.push(cars[i]);
	  cerr << " |-| change top " << temp.top() << endl;
	}
	else { //stack top contains smaller numbered car
	  if(temp.top() == cur) {
	    cerr << "goooood found in stack " << cur << endl;
	    temp.pop();
	    cur++;
	    i--; // start over with new cur val
	  } else {
	    cerr << " BREAKAGE DUE POINT 1 in stack\n";
	    f = false; break;
	  }
	}
      }
      else if (cars[i] == cur) {
	cur++;
	cerr << " fine " << cars[i] << endl;
      }
    }

    if (f) cout << "yes"; else cout << "no";
    cout << endl;
  }
  return 0;
}
