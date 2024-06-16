#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, forcas, somatoriax = 0, somatoriay = 0, somatoriaz = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < 3; j++)
        {
            cin >> forcas;
						if(j == 0) {
							somatoriax += forcas;
						}
						else if(j == 1) {
							somatoriay += forcas;
						}else {
							somatoriaz += forcas;
						}
        }
    }
    if(somatoriax == 0 && somatoriay == 0 && somatoriaz == 0)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
