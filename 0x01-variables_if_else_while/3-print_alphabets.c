#include <stdio.h>
/**
 * main - Main function
 * Description: Prints alphabet in lowercase and then run in uppercase.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowerArray[26] = "abcdefghijklmnopqrstuvwxzy";
	char upperArray[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lowerArray[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(upperArray[i]);
	}
	putchar('\n');
	return (0);
}
