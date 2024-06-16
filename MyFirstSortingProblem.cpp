#include <bits/stdc++.h>

using namespace std;
#define ll long long


void solve() {
  int x , y;
  cin >> x >> y;
  cout << min(x, y) << " " << max(x, y) << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
