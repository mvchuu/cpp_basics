#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n = 2;
    double* tab = new double[n];
    for (int i = 0; i < n; i++) {
        cout << "Podaj " << i + 1 << " liczbe: ";
        cin >> tab[i];
    }

    while (true) {
        cout << " -----------" << endl;
        cout << "| MAIN MENU |" << endl;
        cout << " -----------" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        char chose;
        cout << "Choose: ";
        cin >> chose;

        switch (chose) {
        case '1': {
            double total = 0;
            for (int j = 0; j < n; j++) {
                total += tab[j];
            }
            cout << "Total is: " << total << endl;
            break;
        }
        case '2': {
            double diff = tab[0];
            for (int j = 1; j < n; j++) {
                diff -= tab[j];
            }
            cout << "Difference is: " << diff << endl;
            break;
        }
        case '3': {
            double product = 1;
            for (int j = 0; j < n; j++) {
                product *= tab[j];
            }
            cout << "Product is: " << product << endl;
            break;
        }
        case '4': {
            double quotient = tab[0];
            for (int j = 1; j < n; j++) {
                if (tab[j] != 0) {
                    quotient /= tab[j];
                }
                else {
                    cout << "Error: Division by 0!" << endl;
                    delete[] tab;
                    return 1;
                }
            }
            cout << "Quotient is: " << quotient << endl;
            break;
        }
        case '5': {
            delete[] tab; 
            return 0;
        }
        default: {
            cout << "Error: No preferred option!" << endl;
            break;
        }
        }

        cout << "Press Enter to continue..." << endl;
        cin.ignore(); 
        cin.get();    

        system("cls");
    }

    delete[] tab; 
    return 0;
}
