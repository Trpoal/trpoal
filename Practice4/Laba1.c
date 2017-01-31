#include <stdio.h>
#define S 20
int main()
{
	int *mas_ch[S],k=0,*max;
	char mas_str[S][80];
	
	printf("Enter string\n");

	for (int i = 0; i < S; i++)
	{
		printf("%d: ", i);
		gets(mas_str[i]);

		if (!*mas_str[i]) break;

		mas_ch[i] = &mas_str[i];
		k++;
	}


   for (int i = 0; i < k; i++)

	   for (int j = i+1; j < k; j++)
	   {
		   if (strlen(mas_ch[j]) > strlen(mas_ch[i]))
		   {

			   max = mas_ch[j];
			   mas_ch[j] = mas_ch[i];
			   mas_ch[i] = max;
		   }
	   }

   printf("Magic!\n");

	for (int i = 0; i < k; i++)
	{

		printf("%d: %s\n",i, mas_ch[i]);
	}
	
	return(0);

}