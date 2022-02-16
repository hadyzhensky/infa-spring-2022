#include <iostream>

using namespace std;

int prime_number = 1;

bool is_prime(unsigned long long value) {
    for (int i = 2; i * i <= value; ++i) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

unsigned long long next_prime() {
    prime_number++;
    while (!is_prime(prime_number)) {
        prime_number++;
    }
    return prime_number;
}

int main() {
    for (int i = 0; i < 5; ++i) {
        cout << next_prime() << " ";
    }
}