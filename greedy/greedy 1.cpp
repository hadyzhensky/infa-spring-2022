#include <iostream>

using namespace std;

int main() {
    int L = 0, n = 0, one_d = 0, nunb_of_gas_station = 0, total_d = 0;

    cout << "enter the distance between Moscow and S.Petersburg" << endl;
    cin >> L;
    cout << "enter the number of gas stations" << endl;
    cin >> n;
    cout << "enter the distance that car can travel" << endl;
    cin >> one_d;
    cout << "enter the distance between Moscow and each gas station" << endl;

    int* d_of_g_station = new int[n];

    int* name_of_g_station = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> d_of_g_station[i];
    }

    total_d += one_d;

    for (int i = 0; i <= n; i++) {

        if (total_d < d_of_g_station[i + 1]) {
            total_d = d_of_g_station[i] + one_d;
            name_of_g_station[nunb_of_gas_station] = d_of_g_station[i];
            nunb_of_gas_station += 1;
        }

        if (total_d > L)
            break;
    }
    for (int i = 0; i < nunb_of_gas_station; i++)
        cout << name_of_g_station[i] << endl;

    delete[] d_of_g_station;
    delete[] name_of_g_station;
}