/*************************************************
* Author: Emmet Cooke
* Date: 10/26/2017
* Description: 
*************************************************/
#include <iostream>
using std::cout;
using std::cin;

#include "reverseString.hpp"

/*************************************************
* Description: This function takes in a string and
* then outputs it in reverse order.
*************************************************/
void reverseString(string sIn)
{
	if (sIn != "")	// empty string is the base case
	{
		cout << sIn[sIn.length() - 1];
		return reverseString(sIn.substr(0, sIn.length() - 1));
	}
	cout << "\n";
}

/*************************************************
* Description: Gets the data from the user and runs the
* recursive function reverseString.
*************************************************/
void runReverseString()
{
	string sIn;
	cout << "Please enter a string to be reversed: ";
	getline(cin, sIn);
	reverseString(sIn);
}