#include <bits/stdc++.h>

using namespace std;

#define PB push_back
#define MK make_pair

int main() {
	int entr;
	cin >> entr;
	for(int i = 0;i < entr;i++) {
		string entr;
		cin >> entr;
		stringstream transfere;
		int n1, n2;
		string a, b, res;
		a += entr[0];
		a += entr[1];
		transfere << a;
		transfere >> n1;
		b += entr[3];
		b += entr[4];
		stringstream outra;
		outra << b;
		outra >> n2;

		if(n1 > 12) {
			n1 -= 12;
			res = "PM";
		}else {
			if(n1 != 12) {
				res = "AM";
			}else {
				res = "PM";
			}
		}

		if(n1 == 0) {
			if(n2 >= 10){
				cout << "12:" << n2 << " AM" <<  endl;
			}else {
				cout << "12:" << "0" << n2 << " AM" << endl;
			}
		}
		else if(n1 >= 10 && n2 >= 10){
			cout << n1 << ":" << n2 << " " << res << endl;
		}
		else if(n1 < 10) {
			if(n2 < 10) {
				cout << "0" << n1 << ":" << "0" << n2 << " " << res << endl;
			}else {
				cout << "0" << n1 << ":" << n2 << " " << res << endl;
			}
		}
		else if(n2 < 10) {
			cout << n1 << ":" << "0" << n2 << " " << res << endl;
		}

		
	}
	return 0;
}
