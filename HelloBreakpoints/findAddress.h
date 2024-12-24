#pragma once

//A small function to get the address of the position in the array and return it. 


//take an array, and an index, and return the address of the index in the array.
int* findAddress(int i, char arr[17])
{
	int *arrAddr = &arr[i];
	


	return arrAddr;
}