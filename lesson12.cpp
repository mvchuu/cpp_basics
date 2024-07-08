#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int month;

	cout << "Which month are you interested in?" << endl;
	if (!(cin >> month)) {
		cerr << "It is not intiger!" << endl;
		exit(0);
	}

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: {
		cout << "This mont have 31 days." << endl;
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11: {
		cout << "This month have 30 days." << endl;
		break;
	}
	case 2: {
		int year;
		cout << "Let us know the year you mean: ";
		cin >> year;
		if (((year % 4 == 0) && (year % 100 == 0)) || (year % 400 == 0)) {
			cout << "This month have 29 days." << endl;
		}
		else {
			cout << "This month have 28 days." << endl;
		}
		break;
	}
	default: {
		cout << "Error: Month is wrong!" << endl;
	}
	}

	return 0;
}