#include <stdio.h>
#define SIZE 100
int main()
{
    char str[SIZE];

    printf("Enter string\n");
    gets(str);

    int len = strlen(str);

    while (str[0] == ' ')
    {
        for (int i = 0; i <= len; i++)
            str[i] = str[i + 1];
        len = len - 1;
    }

    while (str[len - 1] == ' ')
    {
        len = len - 1;
    }
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

    int slova = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] != ' ') && ((str[i + 1] == ' ') || (str[i + 1] == '\0')))
            slova++;
    }

    printf("Clov = %d\n", slova);
    printf("Clova:\n");
    

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            printf("\n");
        else
            printf("%c", str[i]);
    }
    printf("\n");
}