#include <iostream>

using namespace std;

double average(double& a, double& b, double& c);

int main() {

	double a = 3, b = 4, c = 1;
	cout << "Average of array elements is: " << average(a, b, c) << endl;

	return 0;
}

double average(double& a, double& b, double& c) {
	return (a + b + c) / 3;
}