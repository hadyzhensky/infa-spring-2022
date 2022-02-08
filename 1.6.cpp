#include <iostream>
using namespace std;

int main() {
	int N, x, y, max1=0, max2=0;
	cin >> N >> y;
	while (N > 1) {
		cin >> x;
		if (y <= x) {
			max1 += 1;
		}
		else {
			max1 = 0;
		}
		if (max1 >= max2) {
			max2 = max1 + 1;
		}
		y = x;
		N -= 1;
	}
	cout << max2;
	return 0;

}