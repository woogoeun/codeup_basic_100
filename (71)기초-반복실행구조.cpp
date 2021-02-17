/* 71 */
/*============================
0 입력될 때까지 무한 출력하기1
=============================*/

#include <iostream>
using namespace std;

int main() {
	int a;
	
	turn:
	cin >> a;
	
	if (a != 0) {
		cout << a << endl;
		goto turn;
	}

	return 0;
}