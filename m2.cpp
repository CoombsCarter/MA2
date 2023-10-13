/*
* FILE           : f4.cpp
* PROJECT        : SENG1000 - Focused Assignment 4
* PROGRAMMER     : Carter Coombs - 8868877
* FIRST VERSION  : 2023-10-05
* DESCRIPTION    :
*	This program takes a users list of inputted integers and decides which integer is the lowest.
*/




#include <stdio.h>




main() {

	return 0;
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