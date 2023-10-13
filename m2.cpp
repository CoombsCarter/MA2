/*
* FILE           : m2.cpp
* PROJECT        : SENG1000 - Major Assignment 2
* PROGRAMMER     : Carter Coombs - 8868877
* FIRST VERSION  : 2023-10-13
* DESCRIPTION    :
*	This program takes user input for an integer base and an integer exponent
*	and returns a power calculation
*/




#include <stdio.h>




main() {

	return 0;
}



/*
* Function: powerCalculation()
* Description: 
* Parameters: 
* Returns: 
*/
int powerCalculation(int base, int exponent) {
	int calculatedValue = 1;
	for (int i = 0; i < exponent; i++) {
		calculatedValue = (base * calculatedValue);
	}
	return calculatedValue;
}




/*
* Function: getNum()
* Description: This function takes a user input and that input as an integer
* Parameters: void
* Returns: int number: the number the user inputs
*/
#pragma warning(disable: 4996)
int getNum(void)
{
	/* we will see in a later lecture how we can improve this code */
	char record[121] = { 0 }; /* record stores the string */
	int number = 0;
	/* NOTE to student: indent and brace this function consistent with
	your others */
	/* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);
	/* extract the number from the string; sscanf() returns a number
	* corresponding with the number of items it found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		* the system, set number to -1 */
		number = -1;
	}
	return number;
}