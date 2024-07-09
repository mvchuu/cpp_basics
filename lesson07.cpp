#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	int randomNumber;
	int yourChose;
	int attempt = 0;

	cout << "Hello! Let's play a game... I thought about a number in range of 1 to 100" << endl;
	
	srand(time(NULL));
	randomNumber = rand() % 100 + 1;

	while (true) {
		attempt++;

		cout << "It's your " << attempt << " attempt." << endl;
		cin >> yourChose;

		if (yourChose == randomNumber) {
			cout << "You are right in " << attempt << " attemps!";
			break;
		}
		else if (yourChose < randomNumber) {
			cout << "Number is greater." << endl;
		}
		else if (yourChose > randomNumber) {
			cout << "Number is lower" << endl;
		}

	}

	system("pause");

	return 0;
}
