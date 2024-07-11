#include <iostream>

using namespace std;

double find_max(double* tab, int l);

int main() {
    int length;
    cout << "Insert length of array: ";
    cin >> length;

    double* array = new double[length];

    for (int i = 0; i < length; i++) {
        cout << "Insert [" << i << "] element of array: ";
        cin >> array[i];
    }

    double max_value = find_max(array, length);
    cout << "The maximum value in the array is: " << max_value << endl;

    delete[] array;

    return 0;
}

double find_max(double* tab, int l) {
    if (l == 0) {
        cerr << "Error: Array length is 0!" << endl;
        return -1; // Return an error value or handle as appropriate
    }

    double max_value = *tab;
    for (int i = 1; i < l; i++) {
        if (tab[i] > max_value) {
            max_value = tab[i];
        }
    }
    return max_value;
}
