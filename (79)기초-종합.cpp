/* 79 */
/*=======================================
원하는 문자가 입력될 때까지 반복 출력하기
========================================*/

#include <iostream>
using namespace std;

int main() {
	char a;

	while (1) {
		cin >> a;
		cout << a << endl;
		if (a == 'q') break;
	}

	return 0;
}