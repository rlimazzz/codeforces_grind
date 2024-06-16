#include <bits/stdc++.h>

using namespace std;

void solve() {
	int entr, max_sum = INT_MIN, num_max = 0;
	cin >> entr;
		for(int m = 2;m <= entr;m++) {
			int sum = 0;
			for(int j = 1;j <= entr;j++) {
				if(j * m > entr) {
					break;
				}
				sum += (j * m);
			}
			if(sum > max_sum) {
				max_sum = sum;
				num_max = m;
			}
		}
	cout << num_max << "\n";
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
