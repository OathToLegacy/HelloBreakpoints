#include <stdio.h>

int main() 
{
	char arrA[17] = { 'H', 'E', 'L', 'L', 'O', ' ', 'B', 'R', 'E', 'A', 'K', 'P', 'O', 'I', 'N', 'T', 'S'};
	char arrB[17];

	for (int i = 0; i < 17; i++)
	{
		arrB[i] = arrA[16 - i];
		printf("%c", arrB[i]);
		arrA[16 - i] = 'X';
		
	}

	return 0;
}