/* 84 */
/*===============
ºû ¼¯¾î »ö ¸¸µé±â
================*/

#include <iostream>
using namespace std;

int main() {
	int r, g, b;

	cin >> r >> g >> b;

	for (int i = 0; i < r; i++)
		for (int j = 0; j < g; j++) 
			for (int k = 0; k < b; k++) {
				cout << i << " " << j << " " << k << endl;
			}

	cout << r*g*b;

	return 0;
}