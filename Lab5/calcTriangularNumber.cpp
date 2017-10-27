/*************************************************
* Author: Emmet Cooke
* Date: 10/26/2017
* Description: This contains the sumIntArray function
* and its helper.
*************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "validateInput.hpp"
#include "calcTriangularNumber.hpp"

/*************************************************
* Description:
*************************************************/
int calcTriangularNumber(int num)
{
	if (num == 0)
	{
		return 0;
	}
	return num + calcTriangularNumber(num - 1);
}

/*************************************************
* Description: Gets the data from the user and runs the
* recursive function calcTriangularNumber.
*************************************************/
void runCalcTriangularNumber()
{
	string validateInput;
	int userNum;
	do
	{
		cout << "Please enter a number to get its Triangular Number: ";
		getline(cin, validateInput);
		userNum = getInt(validateInput);
		if (userNum < 0)
		{
			cout << "Please enter a valid int." << endl;
		}
	} while (userNum < 0);
	cout << "Triangular Number: " << calcTriangularNumber(userNum) << endl;
}
