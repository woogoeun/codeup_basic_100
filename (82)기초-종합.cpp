/* 82 */
/*============
16���� ������?
=============*/

#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> hex >> n;

	for (int i = 1; i <= 15; i++) {
		cout << hex << uppercase 
			<< n << "*" << i << "=" << n * i << endl;
	}

	return 0;
}