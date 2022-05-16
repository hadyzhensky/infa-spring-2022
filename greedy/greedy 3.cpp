#include <iostream>
using namespace std;

int main() {
	int T = 0, balance = 0, coin = 0, ten_n = 0, sev_n = 0, five_n = 0, two_n = 0, one_n = 0;
	cout << "enter the amount" << endl;
	cin >> T;

	balance = T;

	while (balance >= 10) {
		balance -= 10;
		ten_n++;
	}
	while (balance >= 7) {
		balance -= 7;
		sev_n++;
	}
	while (balance >= 5) {
		balance -= 5;
		five_n++;
	}
	while (balance >= 2) {
		balance -= 2;
		two_n++;
	}
	while (balance >= 1) {
		balance -= 1;
		one_n++;
	}

	cout << "number of: 10 = " << ten_n << endl << "7 = " << sev_n << endl << "5 = " << five_n << endl << "2 = " << two_n << endl << "1 = " << one_n << endl;
}