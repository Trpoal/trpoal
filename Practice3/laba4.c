#include <stdio.h>
#define SIZE 20
int main()
{
	char string[SIZE];
	printf("Enter the string:\n");
	gets(string);
	int del, sumB=0, sumL=0;

	if (strlen(string) > 4)
		del = (strlen(string) / 4)+1;

	for (int i = 0; i < del; i++)
	{
		for (int j = i * 4; j < 4 * (i + 1); j++)
		{
			if (j < strlen(string))
			{

				sumL = sumL + ((int)string[j] - 48);
				sumB = sumB + sumL;
				sumL = 0;
			}
		}
	}
		
	
	printf("Sum=%d\n", sumB);

	return(0);
}