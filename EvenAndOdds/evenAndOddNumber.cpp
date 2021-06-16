#include <iostream>

void evenOddNumber() {
	int number;
	std::cout << "Please, enter whole number: ";
	std::cin >> number;
	if (number % 2 == 0)
	{
		std::cout << "You have entered even number" << std::endl;
	}
	else
	{
		std::cout << "You have entered odd number" << std::endl;
	}
}