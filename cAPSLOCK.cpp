#include <bits/stdc++.h>

using namespace std;

void solve() {
  string entr;
  cin >> entr;
  int conta = 0, contb = 0;
  for(int i = 0;i < (int)entr.size();i++) {
    if(entr[i] >= 'A' && entr[i] <= 'Z') {
      contb++;
    }
    else if(entr[i] >= 'a' && entr[i] <= 'z' && i == 0) {
      conta++;
    }
  }

  if((conta == 1 && contb == (int)entr.size() - 1) || contb == (int)entr.size()){
    for(int i = 0;i < (int)entr.size();i++) {
      if(entr[i] >= 'A' && entr[i] <= 'Z') {
        entr[i] += 32;
      }else {
        entr[i] -= 32;
      }
    }
  }
  cout << entr << "\n";
}

int32_t main() {
  int t = 1;
  while(t--) {
    solve();
  }
  return 0;
} 
