#include <bits/stdc++.h>

using namespace std;

void solve() {
  int entr, cont = INT_MIN;
  string maior;
  map<string, int> ass;
  cin >> entr;
  for(int i = 0;i < entr;i++) {
    string entr;
    cin >> entr;
    if(ass.find(entr) != ass.end()) {
      ass[entr]++;
      if(max(ass[entr], cont) == ass[entr]) {
        cont = ass[entr];
        maior = entr;
      }
    }else {
      ass[entr] = 1;
      if(max(ass[entr], cont) == ass[entr]) {
        cont = ass[entr];
        maior = entr;
      }
    }
  }

  cout << maior << "\n";
}

int32_t main() {
  int t = 1;
  while(t--) {
    solve();
  }
  return 0;
} 
