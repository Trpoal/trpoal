#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter string\n");
    gets(str);
    int len = strlen(str);
    printf("%d\n", len);
    while (str[0] == ' ')
    {
        for (int i = 0; i <= len; i++)
            str[i] = str[i + 1];
        len = len - 1;
    }
    while (str[len-1] == ' ')
    {
        len = len - 1;
    }
    for (int i = 1; i <= len-2; i++)
    {
        while (str[i] == ' '&&str[i + 1] == ' ')
        {
                for (int j = i; j <= len; j++)
                   str[j] = str[j + 1];
                len = len - 1;
        }
        
    }
    str[len] = '\0';
    printf("%s", str);
}
