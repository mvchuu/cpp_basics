#include <iostream>

using namespace std;

int main() {
	
	int const numberOfSubjects = 13;

	double grades[numberOfSubjects];

	for (int i = 0; i < numberOfSubjects; i++) {
		cout << "What is your " << i + 1;
		if ((i+1) % 100 >= 11 && (i+1) % 100 <= 13) {
			cout << "th";
		}
		else if ((i+1) % 10 == 1) {
			cout << "st";
		}
		else if ((i+1) % 10 == 2) {
			cout << "nd";
		}
		else if ((i+1) % 10 == 3) {
			cout << "rd";
		}
		else {
			cout << "th";
		}
		cout << " grade?" << endl;
		cin >> grades[i];
		
		while (grades[i] < 1 || grades[i] > 5) {
			cout << "Grade is out of range! Please insert new one." << endl;
			cin >> grades[i];
		}
	}

	double full = 0;
	for (int j = 0; j < numberOfSubjects; j++) {
		full += grades[j];
	}
	double average = full / numberOfSubjects;

	cout << "Let's calculate average of the grades. The average is: " << average << endl;

	return 0;
}