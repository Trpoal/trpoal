#include <stdio.h>
#define N 120

int main()
{
	char str[N] = { '\0' };
	char* first;
	char* last;

	printf("Enterstring:\n");
	gets(str);

	int len = strlen(str) - 1;

	first = &str[0];
	last = &str[len];

	for (int i = 1; i<len; i++)
	{
		if (*first == *last)
		{
			first = &str[i];
			last = &str[len - i];
		}
		else
		{
			printf("This is not a palindrome\n");
			break;
		}
	}

	if (*first == *last)
		printf("This is a palindrome\n");

	return 0;
}