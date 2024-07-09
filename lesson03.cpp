#include <iostream>

using namespace std;

int main()
{
	string pin;
	string login;
	string password;

	cout << "Welcome in our bankomat." << endl << endl;
	cout << "Insert your login: " << endl;
	cin >> login;
	cout << "Insert your password: " << endl;
	cin >> password;
	
	if ((login == "SweetRaccoon") && (password == "ILoveRaccoons123!"))
	{
		cout << "Confirm your pin: " << endl;
		cin >> pin;

		if (pin == "3456")
		{
			cout << "Welcome on your account." << endl;
		}
		else
		{
			cout << "PIN is wrong." << endl;
		}
	}
	else
	{
		cout << "Login or password wrong. Try again." << endl;
	}

	return 0;
}
