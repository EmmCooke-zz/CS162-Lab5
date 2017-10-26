#include <iostream>
using std::cout;

#include "Menu.hpp"
#include "validateInput.hpp"

void reverseString(string sIn);
int sumIntArray(int * arrayIn, int size);
int calcTriangularNumber(int num);

int main()
{
	return 0;
}

void reverseString(string sIn)
{
	if (sIn != "")
	{
		cout << sIn[sIn.length() - 1];
		return reverseString(sIn.substr(0, sIn.length() - 1));
	}
	cout << "\n";
}

int sumIntArray(int * arrayIn, int size)
{
	if (size == 0)
	{
		return 0;
	}
	return arrayIn[size - 1] + sumIntArray(arrayIn, size - 1);
}

int calcTriangularNumber(int num)
{
	if (num == 0)
	{
		return 0;
	}
	return num + calcTriangularNumber(num - 1);
}