/* 73 */
/*============================
0 입력될 때까지 무한 출력하기2
=============================*/

#include <iostream>
using namespace std;

int main() {
	int a;
	
loop:
	cin >> a;

	if (a != 0) {
		cout << a << endl;
		goto loop;
	}

	return 0;
}