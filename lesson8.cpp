#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

int main() {

	int yourSheet[6];
	int lottoSheet[6];

	srand(time(NULL));
	//lottoNumber = rand() % 49 + 1;

	cout << "Welcome in lottery jackpot!" << endl;

	for (int i = 0; i < 6; i++) {

		cout << "Write your: " << i + 1 << " number." << endl;
		cin >> yourSheet[i];
	
	}

	for (int j = 0; j < 6; j++) {

		this_thread::sleep_for(chrono::milliseconds(100));
		lottoSheet[j] = rand() % 49 + 1;
		
	}

	for (int j = 0; j < 6; j++) {

		cout << lottoSheet[j] << endl;
	
	}

	return 0;
}