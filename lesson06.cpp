#include <iostream>

using namespace std;

int main()
{

	int population = 1;
	int time = 0;

	do {

		time++;
		population *= 2;

		cout << "Population of buggs: " << population << ", in time: " << time << endl;
	
	} while (population < 1000);

	while (false) {
		cout << "This comand can't be display because conditional is't true";
	}

	return 0;
}
