#include <iostream>

using namespace std;

bool check(unsigned long long number) {
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cout << check(n);
}