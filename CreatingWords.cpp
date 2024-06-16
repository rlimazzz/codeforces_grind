#include <bits/stdc++.h>

using namespace std;

void solve() {
	int entr;
	cin >> entr;
	for(int i = 0;i < entr;i++) {
		string a, b;
		cin >> a >> b;
		char aux = a[0];
		a[0] = b[0];
		b[0] = aux;
		cout << a << " " << b << "\n";
	}
}

int main() {
	int t = 1;
	while(t--) {
		solve();
	}
	return 0;
}
