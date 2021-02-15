/* 49 */
/*========================
두 정수 입력받아 비교하기1
========================*/

#include <iostream>
using namespace std;

int main() {
	int a, b;

	cin >> a >> b;
	if (a > b) cout << "1";
	else cout << "0";
	
	//cout<< (a > b ? 1 : 0);

	return 0;
}