#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("Guess the number\n");
    srand(time(NULL));
    int chislo = 0 + rand() % 100;
    int i = 1; 
    int ch;

    while (i != 0)
    {
        printf("Enter the number\n");
        scanf("%d", &ch);

        if (ch == chislo)
        {
            i = 0;
            printf("WOW\n");
        }

        if (ch > chislo)
            printf("Less\n");

        if (ch < chislo)
            printf("More\n");

    }
}