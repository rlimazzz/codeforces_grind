#include <bits/stdc++.h>

using namespace std;

#define PB push_back
#define MK make_pair

int main() {
	int n;
	cin >> n;
	for(int i =0;i < n;i++) {
		int entr;
		cin >>entr;
		vector<string> solve;
		for(int j = 0;j < entr;j++) {
			string s;
			int contador =0, contador2 = 0;
			if(j % 2 == 0) {
				for(int m = 0;m < 2 * entr;m++) {
					if(contador < 2) {
						contador++;
						s += '#';
						if(contador == 2) {
							contador2 = 0;
						}
					}else {
						contador2++;
						s += '.';
						if(contador2 == 2) {
							contador = 0;
						}
					}
				}
			}else {
				for(int m = 0;m < 2 * entr;m++) {
					if(contador < 2) {
						contador++;
						s += '.';
						if(contador == 2) {
							contador2 = 0;
						}
					}else {
						contador2++;
						s += '#';
						if(contador2 == 2) {
							contador = 0;
						}
					}
				}
			}
			solve.push_back(s);
		}
		for(auto x : solve) {
			cout << x << endl;
			cout << x << endl;
		}
	}

	return 0;
}
