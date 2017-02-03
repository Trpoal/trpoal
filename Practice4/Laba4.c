#include <stdio.h>
#define N 5
typedef char coun[80];
int main()
{
	int* mas[N];
	coun count;
	for (int i = 0; i < N; i++)
	{
		scanf("%s", &count);
		mas[i] = malloc(sizeof(coun));
		*mas[i] = count;
	}
	for (int i = 0; i < N; i++)
		printf("str=%s, x=%x\n", *mas[i],mas[i]);
	return(0);
}