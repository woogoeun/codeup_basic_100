/* 76 */
/*===============================
문자 1개 입력받아 알파벳 출력하기
================================*/

#include <iostream>
using namespace std;

int main() {
	char a;

	cin >> a;

	int i = 'a';
	do {
		cout << (char)i << " ";
		i++;
	} while (i != a + 1);

	return 0;
}