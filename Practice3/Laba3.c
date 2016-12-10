#include <stdio.h>
#define SIZE 100
int main()
{
    char str[SIZE];
    int len1 = 0, glob = 0, pos = 0;
    int len = strlen(str);

    printf("Enter string\n");
    gets(str);


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

    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] != ' ')
            len1++;
        if ((str[i+1] == ' ')||(str[i+1]=='\0'))
        {
            if (len > glob)
            {
                glob = len1;
                len1 = 0;
                pos = i;
            }
        }


    }

    for (int i = (pos - glob+1); i <= pos; i++)
        printf("%c", str[i]);

    printf("\n");
}