#include <stdio.h>
#include "findAddress.h"
int main() 
{
	char arrA[17] = { 'H', 'E', 'L', 'L', 'O', ' ', 'B', 'R', 'E', 'A', 'K', 'P', 'O', 'I', 'N', 'T', 'S'};
	char arrB[17];

	char* printPtr = 'X'; //array pointer

	for (int i = 0; i < 17; i++)
	{
		//Store the value of the array in arrB using the address found in findAddress function.
		arrB[i] = *findAddress(i, arrA);
		printPtr = &arrB[i]; //address of the array to be printed.
		printf("%c", *printPtr); //printed the value of the array using the address.
		//arrA[16 - i] = 'X';
		
	}

	return 0;
}