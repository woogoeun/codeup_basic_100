/* 68 */
/*=============================
정수 1개 입력받아 평가 출력하기
=============================*/

#include <iostream>
using namespace std;

int main() {
	int a;

	cin >> a;

	if (a >= 90 && a <= 100) cout << "A" << endl;
	else if (a >= 70 && a <= 89) cout << "B" << endl;
	else if (a >= 40 && a <= 69) cout << "C" << endl;
	else if (a >= 0 && a <= 39) cout << "D" << endl;

	return 0;
}