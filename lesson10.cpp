#include <iostream>

using namespace std;

int main() {

	int n;
	cout << "How many expresions of the sequence you want determine?\n";
	cin >> n;
	
	if (n <= 0) {
		cout << "The number of array must be positive." << endl;
		return 1;
	}

	long double* fibonacciSequence = new long double[n];

	if (n >= 1) {
		fibonacciSequence[0] = 1;
	}
	if (n >= 2) {
		fibonacciSequence[1] = 1;
	}

	for (int i = 2; i < n; i++) {
		fibonacciSequence[i] = fibonacciSequence[i - 1] + fibonacciSequence[i - 2];
	}

	cout << "Fibonacci Sequence is: ";
	for (int j = 0; j < n; j++) {
		cout << fibonacciSequence[j] << " ";
	}
	cout << "\n";

	return 0;
}