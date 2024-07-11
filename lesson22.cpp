#include <iostream>

using namespace std;

double *make_array(int l);
double average(double *tab, int l);

int main() {

	int length;
	cout << "Insert length of array: ";
	cin >> length;
	cout << endl;
	double* array = make_array(length);
	cout << "Average of array elements is: " << average(array, length);

	return 0;
}

double *make_array(int l) {

	double* tab = new double[l];

	for (int i = 0; i < l; i++) {
		cout << "Insert [" << i << "] element of array: ";
		cin >> tab[i];
	}
	return tab;
}

double average(double *tab, int l) {
	double sum = 0;
	for (int i = 0; i < l; i++) {
		sum += *tab;
		tab++;
	}
	return sum / l;
}