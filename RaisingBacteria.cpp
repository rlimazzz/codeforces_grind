#include <bits/stdc++.h>

using namespace std;

void solve() {
  int x, potencia = 1, contador = 0;
  cin >> x;

  while(x != 0) {
    if(potencia * 2 > x) {
      x -= potencia;
      contador++;
      potencia = 1;
    }else {
      potencia *= 2;
    }

  }
  cout << contador << "\n";
}

int32_t main() {
  int t = 1;
  while(t--) {
    solve();
  }
  return 0;
} 
