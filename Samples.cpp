#include <stdio.h>

/*
* Title			: Samples.cpp
* Project		: Arrays (for learning only)
* Author		: Nelson Wong
* Description	: Pulled sample lessons from codecademy
* Date			: Feb. 21, 2022
*/

int main(void)
{
	//double q[5];		// uninitialised array
	//int evens[5] = { 2, 4, 6, 8, 10 }; // initialised array

	
	
	int evens[] = { 2, 4, 6, 8, 10, 12 };
	int odds[] = { 1, 4, 5, 7, 10, 11 }; //modify this array appropriately by reassignment

	printf("%d\n", evens[2]);

	odds[1] = 3;	//reassigned second and fifth elements
	odds[4] = 9;


	/* Looping through arrays */
	int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
	int arr2[100];

	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", i);
	}

	for (int i = 0; i < 100; i++)
	{
		arr2[i] = i + 4;
		printf("%d\n", i);
	}


	return 0;
}