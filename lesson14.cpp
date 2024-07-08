#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {

	int phone_nr;
	string name, last_name;

	fstream file;
	file.open("data.txt", ios::in);

	if (file.good() == false) {
		cout << "Error: File doesn't exist!" << endl;
		exit(0);
	}

	string line;
	int line_nr = 1;
	while (getline(file, line)) {

		switch (line_nr)
		{
		case 1: name = line; break;
		case 2: last_name = line; break;
		case 3: phone_nr = atoi(line.c_str()); break;
		default:
			break;
		}

		line_nr++;

	}

	cout  << name << endl;
	cout  << last_name << endl;
	cout  << phone_nr << endl;

	file.close();

	return 0;
}