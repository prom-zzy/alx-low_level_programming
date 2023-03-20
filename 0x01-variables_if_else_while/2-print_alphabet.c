#include <stdio.h>
/**
* main - Main function
* Description: Using for loop methods to prints alphabet in lowercase.
* Return: Always 0 (Success)
*/

int main(void)
{
	char alpArray[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpArray[i]);
	}
	putchar('\n');
	return (0);
}
