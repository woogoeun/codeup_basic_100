/* 92 */
/*===============
함께 문제 푸는 날
================*/

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int day = 1;

	cin >> a >> b >> c;
	while (1) {
		if (day%a != 0 || day % b != 0 || day % c != 0)
			day++;
		else break;
	}
	cout << day;
	
	return 0;
}