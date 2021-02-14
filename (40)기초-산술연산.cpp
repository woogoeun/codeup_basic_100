/* 40 */
/*==================================
정수 1개 입력받아 부호 바꿔 출력하기
===================================*/

#include <iostream>
using namespace std;

int main() {
	int i;

	cin >> i;
	cout << ~i + 1; //보수 연산자(비트 반전)
	//cout << -i; //부호 연산자

	return 0;
}