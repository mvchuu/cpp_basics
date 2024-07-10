#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	clock_t start, stop;
	double time;
	int length;

	cout << "Insert length of array: ";
	cin >> length;

	double *array = new double[length];

	start = clock();
	for (int i = 0; i < length; i++) {
		array[i] = i;
		array[i] += 50;
	}
	stop = clock();
	time = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << "Execution time without pointers: " << time << endl;

	delete[] array;

	array = new double[length];
	double* p = array;

	start = clock();
	for (int i = 0; i < length; i++) {
		*p = i;
		*p += 50;
		p++;
	}
	stop = clock();

	time = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << "Execution time with pointers: " << time << endl;

	return 0;
}