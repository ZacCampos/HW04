#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	int largest = 0;
	int secondLargest = 0;
	int newNum;

	cout << "Please enter a positive number(type -1 to exit): ";
	cin >> newNum;

	while (newNum != -1)
	{
		if(newNum > largest)
		{
			secondLargest = largest;
			largest = newNum;
		}
		else if(newNum > secondLargest)
			secondLargest = newNum;

		cout << "Please enter a positive number(type -1 to exit): ";
		cin >> newNum;
	}

	cout << "The second largest number entered is: " << secondLargest;

	return 0;
}
