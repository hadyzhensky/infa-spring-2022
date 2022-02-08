#include <iostream>
using namespace std;

int main() {
	int N, x, min;
	cin >> N >> x;
	min = x;
	while (N > 1) {
		cin >> x;
		if ((x % 101) < (min % 101)) {
			min = x;
		}
		N -= 1;
	}
	cout << min;
	return 0;

}