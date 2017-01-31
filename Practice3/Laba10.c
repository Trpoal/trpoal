#include <stdio.h>
int main()
{
	char str[50];
	int n;

	printf("Enter string\n");
	gets(str);
	printf("Enter n\n");
	scanf("%d", &n);

	int len = strlen(str);

	while (str[0] == ' ')
	{
		for (int i = 0; i <= len; i++)
			str[i] = str[i + 1];
		len = len - 1;
	}

	while (str[len - 1] == ' ')
		len = len - 1;

	for (int i = 1; i <= len - 2; i++)
	{
		while (str[i] == ' '&&str[i + 1] == ' ')
		{
			for (int j = i; j <= len; j++)
				str[j] = str[j + 1];
			len = len - 1;
		}

	}

	str[len] = '\0';

	int k = 0, pos, dl=0;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			k++;
		if (k == (n - 1))
		{
			pos = i;
			break;
		}
	}

	if (n != 1)
		pos++;

	int l;

	if ((n - 1) > k)
		printf("Error!\n");
	else
	{
		for (int j = pos; (str[j] != ' ') && (str[j] != '\0'); j++)
			dl++;
		l = pos;
		while (str[l] != '\0')
		{
			str[l] = str[l + dl];
			l++;
		}
	}

	printf("%s", str);

		return(0);
}