#include <iostream>

using namespace std;

double metre_to_inch(double m);
double metre_to_yard(double m);
void write(double m, double converted, string unit);

int main() {

	double metre;
	cout << "Enter distance in meters: ";
	cin >> metre;

	write(metre, metre_to_inch(metre), "inches");
	write(metre, metre_to_yard(metre), "yards");

	return 0;
}

double metre_to_yard(double m) {
	double yard = m * 1.0936133;
	return yard;
}

double metre_to_inch(double m) {
	double inch = m * 39.3700787;
	return inch;
}

void write(double m, double converted, string unit) {
	cout << m << " meters in " << unit << " is " << converted << " " << unit << "." << endl;
}