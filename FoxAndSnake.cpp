#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	char grid[n][m];
	for(int i = 0;i < n;i++) {
		for(int j = 0;j < m;j++) {
			if(i % 2 == 0) {
				grid[i][j] = '#';
			}else {
				grid[i][j] = '.';
				if((i - 1) % 4 == 0) {
					grid[i][m - 1] = '#';
				}
				else if((i + 1 ) % 4 == 0){
					grid[i][0] = '#';
				}
			}
		}
		
	}
	for(int i = 0;i < n;i++) {
		for(int j = 0;j < m;j++) {
			cout << grid[i][j];
		}
		cout << endl;
	}

	return 0;
}
