#include <iostream>
using namespace std;

void evenOddNumber();
void counterLoop(int counter);
void leapYear();

int main() {
	int userChoice;
	
	cout << "What do you want to check? Please, select from 1 to 3... " << endl;
	cout << "1. if the number is even or odd" << endl;
	cout << "2. print numbers from 100 to 500 divisible by 3 and 5" << endl;
	cout << "3. how many days are in a month" << endl;

	cin >> userChoice;

	switch (userChoice)
	{
	case 1:
		evenOddNumber();
		break;
	case 2:
		counterLoop(100);
		break;
	case 3:
		leapYear();
		break;
	default:
		cout << "It is not valid!";
		break;
	}

	system("pause>0");
}

void evenOddNumber() 
{
	int number;
	cout << "Please, enter whole number: ";
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "You have entered even number" << endl;
	}
	else
	{
		cout << "You have entered odd number" << endl;
	}
}

void counterLoop(int counter) 
{
	while (counter <= 500)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
			cout << counter << " is divisible\n";
		counter++;
	}
}

void leapYear()
{
	int year, month;
	cout << "Please, enter year, month: ";
	cin >> year >> month;

	switch (month)
	{
	case 2:
		(year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ? cout << "29 days month." : cout << "28 days month.";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30 days month.";
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "31 days month.";
		break;
	default:
		cout << "Not valid!";
	}

}