#include <bits/stdc++.h>

using namespace std;

int main() {
	int entr;
	cin >> entr;
	for(int i= 0;i < entr;i++) {
		long long n, m;
		cin >> n >> m;
		if(m % 2 != 0) {
			long long solve = n * (m - 1);
			cout << solve / 2 << endl;
		}else {
			long long solve = n * m;
			cout << solve / 2 << endl;
		}
	}
	return 0;
}
