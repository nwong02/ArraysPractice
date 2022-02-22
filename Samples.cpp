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
	int arr2[100] = { 0 };

	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", i);
	}

	for (int i = 0; i < 100; i++)
	{
		arr2[i] += 4;
		printf("%d\n", i);
	}


	/* Length of array using sizeof() */
	double values[] = { 1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 9, 11 };
	int len;

	len = sizeof(values) / sizeof(double);
	printf("%i\n", len);

	for (int i = 0; i < len; i++)
	{
		printf("%f\n", values[i]);
	}


	/* Element access in multidimensional arrays */
	int matrix[][4] = { {14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1} };
	int sum = 0;

	int num = matrix[3][1];
	printf("%d\n", num);

	return 0;
}