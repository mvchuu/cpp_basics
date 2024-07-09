#include <iostream>
#include <string>

using namespace std;

int main() {

	string name;
	cout << "Insert name you want reverse: " << endl;
	getline(cin, name);

	int name_length = name.length();
	string reverse_name;

	for (int i = name_length--; i >= 0; i--) {
		reverse_name += name[i];
	}
	cout << reverse_name;

	return 0;
}