#include <stdio.h>
int main()
{
    int str,star;
    printf("Enter\n");
    scanf("%d", &str);
    int probel = (1+(str-1)*2) / 2;

    for (int i = 1; i <= str; i++)
    {
        star = 1 + (i - 1) * 2;

        for (int k = probel; k >= 0; k--)
            printf(" ");

        for (int j = 1; j <= star; j++)
            printf("*");

        printf("\n");
        probel= probel - 1;
    }  

}