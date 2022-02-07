#include <iostream>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	if (N % 5 == 0) {
		while (N > 0) {
			cout << "@\n";
			N -= 1;
		}

	}
	else {
		while (N > 0) {
			cout << "%\n";
			N -= 1;
		}
	}
	return 0;
}