#include <stdio.h>
#define N 10
int main()
{
    int array[N];
    srand(time(NULL));
    int max=-1, min=-1,sum=0;

    for (int i = 0; i < N; i++)
    {
        array[i] = rand() % 200 - 100;
        printf("Array[%d}=%d\n", i,array[i]);
    }

    for (int i = 0; i <N; i++)
        if (array[i] < 0)
        {
            min = i;
            break;
        }
   
    printf("First - = %d\n", array[min]);

    for (int i = 0; i < N; i++)
        if (array[i] > 0)
        {
            max = i;
            break;
        }

    printf("Last + = %d\n", array[max]);
    
    for (int i = min; i <= max; i++)
        sum = sum + array[i];

    printf("Sum=%d\n", sum);
    return(0);
}