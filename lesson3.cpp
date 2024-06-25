#include <iostream>

using namespace std;

int main()
{
	// Declaring string variables we need to login
	string pin;
	string login;
	string password;

	// Login to bank account
	cout << "Welcome in our bankomat." << endl << endl;
	cout << "Insert your login: " << endl;
	cin >> login;
	cout << "Insert your password: " << endl;
	cin >> password;
	// Conditional instruction if have two possible outcoms, true or false
	// If the result is true loop executed. In otherwise not
	// && mean also. All conditions must be true. 
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