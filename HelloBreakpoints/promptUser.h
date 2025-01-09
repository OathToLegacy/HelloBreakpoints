#include <stdio.h>

int promptUser(uintptr_t addr)
{
	//Prompt the user for the address of the current indexed part of the array.

    printf("What is the address of the current indexed part of the array? ");
    int *address;
    
    if (scanf_s("%p", &address) != 1)
    {
        printf("Input error.\n");
        return -1;
    }
    
    if (address == addr)
    {
        printf("Correct!\n");
        return 1;
    }
    else
    {
        printf("Make sure you have properly set the breakpoint.\n");
        return -1;
    }
}