#include <stdio.h>

int main() 
{
	char arrA[17] = { 'H', 'E', 'L', 'L', 'O', ' ', 'B', 'R', 'E', 'A', 'K', 'P', 'O', 'I', 'N', 'T', 'S'};
	char arrB[17];

	char* printPtr = 'X';

	for (int i = 0; i < 17; i++)
	{
		arrB[i] = arrA[16 - i];
		printPtr = &arrB[i];
		printf("%c", *printPtr);
		arrA[16 - i] = 'X';
		
	}

	return 0;
}