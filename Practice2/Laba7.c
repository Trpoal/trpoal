#include <stdio.h>
#define SIZE 256
int main()
{
	int mas[SIZE] = {0};
	char string[SIZE];
	printf("Enter the string:\n");
	gets(string);
	for (int i = 0; i < strlen(string); i++)
		mas[string[i]]++;
	for (int i = 0; i < SIZE; i++)
		if (mas[i])
			printf("%c -> %d\n", (char)i, mas[i]);
	return(0);
}