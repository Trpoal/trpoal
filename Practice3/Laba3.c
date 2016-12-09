#include <stdio.h>;
#define SIZE 20

int main()
{
    char str[SIZE];
    printf("Enter\n");
    gets(str);
    int slova=0;
    for (int i = 0; str[i] != '\0'; i++)
    {

        if ((str[i] != ' ') && ((str[i + 1] = ' ')||(str[i+1]=='\0')))
            slova++;
    }
    printf("%d\n", slova);
}

