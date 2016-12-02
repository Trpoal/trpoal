#include <stdio.h>

int main() {
    float s;
    char k;
    printf("Enter R for translation from radians to degrees\n");
    printf("Enter D for translation from degrees to radians\n");
    scanf("%f%c", &s, &k);

    if (k == 'D')
    {
        s = (s*3.14) / 180;
        printf("%f radians\n", s);
    }
    
    if (k == 'R')
    {
        s = (s * 180) / 3.14;
        printf("%f degrees\n", s);
    }
    
    return(0);
}