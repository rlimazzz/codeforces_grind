#include <bits/stdc++.h>

#define db cout

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) {
		vector<int> analise;
		vector<pair<char, int>> letras;
		int entr;
		cin >> entr;
		for(char j= 'a'; j <= 'z' ;j++) {
			letras.push_back({j, 0});
		}
		string forma;
		for(int j =0;j < entr;j++) {
			int pos;
			cin >> pos;
			int percorre = 0;
			while(true) {
				if(letras[percorre].second == pos) {
					letras[percorre].second++;
					forma += letras[percorre].first;
					break;
				}
				percorre++;
			}
		}
		cout << forma << endl;
	}	
	return 0;
}
