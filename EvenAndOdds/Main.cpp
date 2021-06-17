#include <iostream>

void evenOddNumber();
void counterLoop();
void leapYear();

int main() {
	int userChoice;
	
	std::cout << "What do you want to check? Please, select from 1 to 3... " << std::endl;
	std::cout << "1. if the number is even or odd" << std::endl;
	std::cout << "2. print numbers from 100 to 500 divisible by 3 and 5" << std::endl;
	std::cout << "3. how many days are in a month" << std::endl;

	std::cin >> userChoice;

	switch (userChoice)
	{
	case 1:
		evenOddNumber();
		break;
	case 2:
		counterLoop();
		break;
	case 3:
		leapYear();
		break;
	default:
		std::cout << "It is not valid!";
		break;
	}

	system("pause>0");
}