/*************************************************
* Author: Emmet Cooke
* Date: 10/26/2017
* Description: This contains the sumIntArray function
* and its helper.
*************************************************/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include "validateInput.hpp"

/*************************************************
* Description: This function recursively sums the numbers
* within the passed array.
*************************************************/
int sumIntArray(int * arrayIn, int size)
{
	if (size == 0)
	{
		return 0;
	}
	return arrayIn[size - 1] + sumIntArray(arrayIn, size - 1);
}

/*************************************************
* Description: Gets the data from the user and runs the
* recursive function sumIntArray.
*************************************************/
void runSumIntArray()
{
	int size;
	int * intArray;
	string validateInput;

	do	// Validates that the size is an int
	{
		cout << "What is the size of the int array? ";
		getline(cin, validateInput);
		size = getInt(validateInput);
		if (size < 0)
		{
			cout << "Please enter a valid size." << endl;
		}
	} while (size < 0);

	intArray = new int[size];	// initializes the array

	for (int i = 0; i < size; i++)
	{
		bool valid = false;
		int validateInt;
		do
		{
			cout << "Please enter the int for position " << i << ": ";
			getline(cin, validateInput);
			if (validateInput[0] == '-')	// If a negative number is passed
			{
				validateInt = -1 * getInt(validateInput.substr(1, validateInput.length()));
				// passes the number without the negative sign
				if (!checkStringToInt(validateInput.substr(1, validateInput.length())))
				{
					cout << "Please enter a valid int." << endl;
				}
				else
				{
					valid = true;
				}
			}
			else
			{	// If the number is positive
				validateInt = getInt(validateInput);
				if (!checkStringToInt(validateInput))
				{
					cout << "Please enter a valid int." << endl;
				}
				else
				{
					valid = true;
				}
			}
		} while (!valid);	// If a valid int has not been entered
		intArray[i] = validateInt;
	}

	cout << "Sum of Array: " << sumIntArray(intArray, size) << endl;
	delete[] intArray;	// clears the memory
}