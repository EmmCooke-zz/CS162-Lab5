/*************************************************
* Program: Lab5 - Recursive Functions
* Author: Emmet Cooke
* Date: 10/26/2017
* Description: This file contains the main function
* that runs the menu that asks the user what recursive
* function they would like to use. It then gets the 
* relevant information from the user to run those functions.
*************************************************/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "Menu.hpp"
#include "validateInput.hpp"

// function 1
#include "reverseString.hpp"
// function 2
#include "sumIntArray.hpp"
// function 3
#include "calcTriangularNumber.hpp"

int main()
{
	// Initialize menu
	Menu lab5Menu("Lab 5", 4);
	lab5Menu.setOption(0, "Function 1: reverseString");
	lab5Menu.setOption(1, "Function 2: sumIntArray");
	lab5Menu.setOption(2, "Function 3: calcTriangularNumber");
	lab5Menu.setOption(3, "Exit the Program");
	lab5Menu.printPrompt();

	string validateInput;
	bool exitChoice = false;

	do	// use the menu until exit is chosen
	{
		lab5Menu.printOptions();

		getline(cin, validateInput);
		int menuChoice = getInt(validateInput);
		switch(menuChoice)
		{
		case 1: runReverseString();			// Function 1
			break;		
		case 2: runSumIntArray();			// Function 2
			break;
		case 3: runCalcTriangularNumber();	// Function 3
			break;
		case 4: exitChoice = true;
			break;
		default: cout << "Please enter a choice between 1 and 4." << endl;
		}
	} while (!exitChoice);

	return 0;
}
