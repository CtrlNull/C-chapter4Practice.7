// This program demostrated the nested if statement.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char employed,	// Currently employed, Y or N
		recentGrad; // Rexent graduate, Y or N

	// Is the user employed and a recent graduate?
	cout << "Anwser the following questions \n";
	cout << "with either Y for Yes or ";
	cout << "N for No. \n";
	cout << "Are you employed? ";
	cin >> employed;
	cout << "Have you graduated from college ";
	cout << "in the past two years? ";
	cin >> recentGrad;

	// Determine the user's lean qualifications.
	if (employed == 'Y')
	{
		if (recentGrad == 'Y') // Nested if
		{
			cout << "Your qualify for the special ";
			cout << "interest rate. \n";
		}
		else // Not a recent grad, but employed
		{
			cout << "You must have graduated from ";
			cout << "college in the past two \n";
			cout << "years to qualify. \n";
		}
	}
	else // Not employed
	{
		cout << "you must be employed to qualify. \n";
	}
		
	
    return 0;
}

