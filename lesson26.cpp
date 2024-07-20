#include <iostream>

using namespace std;

int pow(int b, int p);

int main() {

	cout << pow(3, 4);

	return 0;
}

int pow(int b, int p) {
	
	if (b == 0) {
		return 0;
	}
	else if (p == 0) {
		return 1;
	}
	else {
		return b * pow(b, p - 1);
	}
	
}