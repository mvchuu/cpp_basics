// One kid have a birthday coming up soon. He wants to divide candies equaly 
// among children in class. He doesn't want to eat sweets in class

#include <iostream>

using namespace std; // namespace of standard words

int main()
{
	// We declaring two intiger variables for our program
	int candies;
	int students;


	// We ask how many candies mum bought for birthday and how many kids is in class today
	cout << "How many candies mom bought for today?" << endl;
	cin >> candies; // We introduce information that we get to variable
	cout << "How many students is in class today?" << endl;
	cin >> students;

	// Calculations
	students -= 1;
	candies = ((candies - (candies % students)) / students);
	
	// The values that came out of it
	cout << "Each kid get: " << candies << " candies.";

	return 0;
}