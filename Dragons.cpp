#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> A, pair<int,int> B) {
	return A.first < B.first;
}
int main() {
	int s, n;
	vector<pair<int, int>> nivel;
	cin >> s >> n;
	for(int i = 0;i < n;i++) {
		int forca, bonus;
		cin >> forca >> bonus;
		nivel.push_back({forca, bonus});
	}
	sort(nivel.begin(), nivel.end(), cmp);
	int fim = 0;
	for(int i = 0;i < n;i++) {
		if(nivel[i].first >= s) {
			fim++;
			break;
		}else {
			s += nivel[i].second;
		}
	}
	if(fim == 0) {
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
	return 0;
}

