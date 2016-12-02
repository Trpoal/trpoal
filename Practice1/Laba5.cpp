#include <stdio.h>

int main()
{
    float foot, inch;
    printf("Enter foot\n");
    scanf("%f", &foot);
    printf("Enter inch\n");
    scanf("%f", &inch);
    foot = 12 * 2.54*foot;
    inch = 2.54 * inch;
    foot = foot + inch;
    printf("Growth= %f sm\n", foot);
    return (0);
}