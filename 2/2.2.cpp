#include  <iostream>

using namespace std;

int main()
{
    cout << "Type the size of string";

    int size = 0;

    cin >> size;

    cout << "Type the string";

    char *letter = new char [size];

    cin >> letter;

    int n = strlen(letter);
    int k = 0;
    while (n > 0) {

        if (isdigit(letter[k])) {
            cout << letter[k];
        }
        n -= 1;
        k += 1;
    }
}