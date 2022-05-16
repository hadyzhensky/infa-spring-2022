#include <iostream>

using namespace std;

int main() {
    int n = 0, temp_s = 0, temp_e = 0, gg = 0, g = 0, temp_n = 0, min_end = 0, numb_of_ph = 0;

    cout << "enter the number of birds" << endl;
    cin >> n;

    int* start = new int[n];
    int* end = new int[n];
    int* photo = new int[n];

    cout << "enter the start and end of arrival of birds" << endl;
    for (int i = 0; i < n; i++)
        cin >> start[i] >> end[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (start[j] < start[j - 1])
            {
                swap(start[j], start[j - 1]);
                swap(end[j], end[j - 1]);
            }
        }
    }

    min_end = end[temp_n];
    while (gg < n) {

        for (int i = gg; i < n; i++) {
            if (min_end > end[i]) {
                min_end = end[i];
                temp_n = i;
            }
        }
        if ((n-gg-1) > 0) {
            while (start[gg+1] <= min_end) {
                gg++;
            }
        }
        gg++;
        photo[numb_of_ph] = min_end;
        numb_of_ph++;
        min_end = end[gg];
    }
    for (int i = 0; i < numb_of_ph; i++)
        cout << "time to take photo = " << photo[i] << endl;
    delete[] photo;
    delete[] start;
    delete[] end;
    return 0;
}