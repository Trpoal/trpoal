#include <stdio.h>
int main()
{
    srand(time(NULL));

    int len = 1 + rand() % 100;
    char str[10];
    int random;
    const int A = 65;
    const int Z = 90;
    const int c0 = 48;
    const int c9 = 57;
    const a = 97;
    const z = 122;

    for (int i = 0; i <= 10; i++)
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


    
    for (int i = 1; i <= 9; i++)
        printf("%c", str[i]);

    printf("\n");

    for (int i = 0; i <=9; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        { 
            for (int j = i; j <= 10; j++)
                if (str[j] >= 'A' && str[j] <= 'Z')
                {
                    int k = str[i];
                    str[i] = str[j];
                    str[j] = k;
                    break;
                }
        }
  
    }

    for (int i = 1; i <= 9; i++)
        printf("%c", str[i]);

    printf("\n");
}