#include <iostream>

using namespace std;

int fact(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return n * fact(n - 1);
}

int main() {
    int N;
    cin >> N;
    cout << endl << fact(N);
}