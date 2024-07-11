#include <iostream>

using namespace std;

int main() {

	long long * pointer;
	long long big_number = 11;
	pointer = &big_number;

	cout << "*pointer is: " << *pointer << endl;
	cout << "Number is: " << big_number << endl;
	cout << "Memory aliocation as pointer: " << pointer << endl;
	cout << "Memory alocation of big number: " << &big_number << endl;

	getchar();
	return 0;
}