#include <iostream>
using namespace std;

int main() {
	int x = 0, y = 0, z = 0;
	cin >> x >> y;
	z = x;
	while (y > 1) {
		y -= 1;
		z = z * x;
	}
	cout << z;
	return 0;

}