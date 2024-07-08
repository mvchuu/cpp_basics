#include <iostream>
#include <fstream>

using namespace std;

int main() {

	int phone_nr;
	string name, last_name;

	cout << "Insert your name: " << endl; cin >> name;
	cout << "Insert your last name: " << endl; cin >> last_name;
	cout << "Insert your phone number: " << endl; cin >> phone_nr;

	fstream file;
	file.open("data.txt", ios::out | ios::app);

	file << name << endl;
	file << last_name << endl;
	file << phone_nr << endl;

	file.close();

	return 0;
}