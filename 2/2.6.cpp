#include <iostream>
#include <cassert>

using namespace std;

unsigned long long int new_itter(unsigned long long int first_number, unsigned long long int second_number, int itter)
{
    if (itter == 0)
        return first_number + second_number;
    return new_itter(second_number, second_number + first_number, --itter);
}

unsigned long long int fibonachi(int number)
{
    if (number == 0)
        return 0;
    else if (number == 1)
        return 1;
    else
    {
        number -= 2;
        return new_itter(0, 1, number);
    }
}

int main(int args, char** argv)
{

    int number;
    cin >> number;

    cout << fibonachi(number) << '\n';
    system("pause");
    return 0;
}