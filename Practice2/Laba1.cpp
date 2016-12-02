#include <stdio.h>
#include < math.h > //for using sqrt
int main()
{
    float h, t;
    const float g = 9.81;
    printf("Enter hight\n");
    scanf("%f", &h);
    t = sqrt(2 * h / g);
    while ( t>=0 )
    {
        h = g*t*t / 2;
        printf("t=%.0f c, h=%.0f m\n", roundf(t), roundf(h));
        t = t - 1;
    }
    printf("BABAH\n");
    
}