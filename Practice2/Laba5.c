#include <stdio.h>
int main()
{
    srand(time(NULL));
    const int n = 8;
    char str[8];
    int random;
    const int A = 65;
    const int Z = 90;
    const int c0 = 48;
    const int c9 = 57;
    const a = 97;
    const z = 122;
    
    for (int j = 1; j < +10; j++)
    {
        str[0] = (char)(A + rand() % (Z - A));
        str[1] = (char)(c0 + rand() % (c9 - c0));
        str[2] = (char)(a + rand() % (z - a));

        for (int i = 3; i <= 7; i++)
        {
            random = 1 + rand() % 3;

            switch (random)
            {
            case 1: {str[i] = (char)(A + rand() % (Z - A));
                break; }
            case 2: {str[i] = (char)(c0 + rand() % (c9 - c0));
                break; }
            case 3: {str[i] = (char)(a + rand() % (z - a));
                break; }
            }
        }

        for (int i = 0; i <= 2; i++)
        {
            char strhelp[1];
            strhelp[0] = str[i];
            int r = 0 + rand() % 7;
            str[i] = str[r];
            str[r] = strhelp[0];
        }


        for (int i = 0; i <= 7; i++)
            printf("%c", str[i]);

        printf("\n");
    }

}