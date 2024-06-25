#include <iostream>

using namespace std;

int main()
{
	string name;
	int number;

	cout << "What's your name?" << endl;
	cin >> name;
	cout << "Think of a number between 0 and 10:" << endl;
	cin >> number;
	cout << endl;
	if ((number <= 10) && (number >= 1))
	{
		cout << "Hi " << endl;
		for (int i = 0; i < number; i++)
		{
			cout << i+1 << "." << name << endl;
		}
		cout << "!!!" << endl;
	}
	else if (number == 0)
	{
		cout << ":((" << endl;
	}
	else
	{
		cout << "The number doesn't fall within the range!" << endl;
	}

	

	return 0;
}