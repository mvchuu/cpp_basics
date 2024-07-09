#include <iostream>

using namespace std; 

int main()
{
	int candies;
	int students;

	cout << "How many candies mom bought for today?" << endl;
	cin >> candies; 
	cout << "How many students is in class today?" << endl;
	cin >> students;

	students -= 1;
	candies = ((candies - (candies % students)) / students);

	cout << "Each kid get: " << candies << " candies.";

	return 0;
}
