#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter string\n");
    gets(str);
    int len = strlen(str);
    printf("%d\n", len);

    for (int i = 0; i <= len; i++)
    {

        if (str[i] >= '0' && str[i] <= '9')
        { 

            for (int j = i; j <= len; j++)

                if ((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a'&&str[j] <= 'z'))
                {
                    int k = str[i];
                    str[i] = str[j];
                    str[j] = k;
                    break;
                }

        }
      
    }
    printf("%s\n", str);
}