/* 24 */
#include <iostream>
using namespace std;

int main() {
	char s[21];
	cin >> s;

	int i=0;
	while (s[i] != 0) {
		cout << "'" << s[i] << "'" << endl;
		i++;
	}
	/*for (i = 0; s[i] != 0; i++) {
		cout << "'" << s[i] << "'" << endl;
	}*/

	return 0;
}