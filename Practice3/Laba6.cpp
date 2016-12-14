#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#define N 10
int main()
{
    int array[N];
    srand(time(NULL));
    int max=0, min=0, sum = 0;

    for (int i = 0; i < N; i++)
    {
        array[i] = rand() % 200 - 100;
        printf("Array[%d]=%d\n", i, array[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (array[i] > array[max])
            max = i;
        else
            if (array[i] < array[min])
                min = i;
    }

    if (min >= max)
        for (int i = max; i <= min; i++)
         sum = sum + array[i];
    else 
        for (int i = min; i <= max; i++)
            sum = sum + array[i];

    printf("Max=%d\n", array[max]);
    printf("Min=%d\n", array[min]);
    printf("Sum=%d\n", sum);

    return(0);
}