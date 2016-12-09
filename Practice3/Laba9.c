#include <stdio.h>;
#define SIZE 20

int main()
{
    char str[SIZE];

    printf("Enter\n");
    gets(str);

    int len=0, Glob=0, pos=0;

    for (int i = 0; i <= SIZE; i++)
    {
        if (str[i] == str[i + 1])
            len = len + 1;
        else
        {
            if (len != 0)
            {
                if (Glob <= len)
                {
                    Glob = len;
                    pos = i;
                    len = 0;
                }

            }
        }

    }

    printf("Len = %d\n", Glob);
    printf("Max str = ");

    for (int i = (pos-Glob); i <=pos; i++)
        printf("%c", str[i]);

    printf("\n");
    
}