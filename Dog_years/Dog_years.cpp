// Dog_years.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// NOTE: convert version is only for dogs older then 2
int main() {
	int dog_age;
	int early_years, later_years, human_years;

	std::cout << "Enter your dogs age: ";
	std::cin >> dog_age;

	// first two years
	early_years = 21;
	// after two years
	later_years = (dog_age - 2) * 4;
	// Converting to human years
	human_years = early_years + later_years;

	std::cout << "Your dog is " << human_years << " in human years\n";
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
