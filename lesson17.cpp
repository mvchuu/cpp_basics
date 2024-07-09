#include <iostream>
#include <string>

using namespace std;

int main() {

	string name;

	cout << "Insert your name: " << endl;
	cin >> name;

	int name_length = name.length();


	// cout << name[name_length-1] << endl;
	
	if ((name[name_length-1]) == 'a') {
		cout << "You are a woman. Am I right?" << endl;
	}
	else {
		cout << "You are a man. Am I right?" << endl;
	}
	
	return 0;
}