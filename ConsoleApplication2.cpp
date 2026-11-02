// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{
	int number = 0;
	int placeValue = 0;
	std::cout << "Input number to square root" << std::endl;
	std::cin >> number;
	std::cout << "To how many decimal places? (1-6)" << std::endl;
	std::cin >> placeValue;

	float upperBound = number;
	float lowerBound =0;

	while (upperBound - lowerBound > 1/pow(10,placeValue)) {
		float mean = (upperBound + lowerBound) / 2;
		float squareMean = mean * mean;

		if (squareMean > number) {
			upperBound = mean;
		}
		if (squareMean < number) {
			lowerBound = mean;
		}
		if (squareMean == number) {
			lowerBound = mean;
			upperBound = mean;
			break;
		}
		 
	}
	std::cout << std::fixed << std::setprecision(placeValue);
	std::cout << (upperBound + lowerBound) / 2;
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
