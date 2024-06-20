#include <bits/stdc++.h>

using namespace std;

#define PB push_back
#define MK make_pair

int main() {
	int a , b , c;
	int entr;
	cin >> entr;
	while(entr--) {
		cin >> a >> b >> c;
		if(a < b  && b < c) {
			cout << "STAIR" << endl;
		}
		else if(a < b && b > c) {
			cout << "PEAK" << endl;
		}else {
			cout << "NONE" << endl;
		}
	}
	return 0;
}
