#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	string beg = "Ala ma ";
	string end = "kota.";

	string phrase = beg + end;
	cout << phrase << endl;

	transform(phrase.begin(), phrase.end(), phrase.begin(), ::toupper);
	cout << phrase << endl;

	transform(phrase.begin(), phrase.end(), phrase.begin(), ::tolower);
	cout << phrase << endl;

	string search = "kot";

	/*
	size_t position = phrase.find(search);

	if (position != string::npos) {
		cout << "Done! String was found." << endl;
	}
	else {
		cout << "Erorr: String not founded!" << endl;
	}
	*/

	phrase.insert(11, " Filemona");
	cout << phrase << endl;

	phrase.replace(0, 3, "Tomek");
	cout << phrase << endl;

	phrase.erase(8, 10); 
	
	size_t position = phrase.find(search);
	if (position != string::npos) {
		cout << "Done! String was found." << endl;
	}
	else {
		cout << "Erorr: String not founded!" << endl;
	}

	phrase.insert(5, " ma");
	cout << phrase << endl;
	
	string new_phrase = phrase.substr(9, 5);
	cout << new_phrase << endl;

	transform(new_phrase.begin(), new_phrase.end() - 4, new_phrase.begin(), ::toupper);
	cout << new_phrase << endl;

	getchar();

	return 0;
}