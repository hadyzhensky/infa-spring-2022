#include <iostream>
using namespace std;

int main() {
	int N = 0, x, min;
	cin >> N >> x;
	min = x;
	while (N > 1) {
		cin >> x;
		if (x < min) {
			min = x;
		}
		N -= 1;
	}
	cout << min;
	return 0;

}