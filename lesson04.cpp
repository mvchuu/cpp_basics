#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void clearScreen()
{
	cout << "\033[2J\033[1;1H";
}

int  main()
{
	for (int i = 15; i >= 0; i--)
	{
		this_thread::sleep_for(chrono::seconds(1));
		clearScreen();
		cout << i << endl;
	}

	cout << "Jebut!" << endl;

	return 0;
}
