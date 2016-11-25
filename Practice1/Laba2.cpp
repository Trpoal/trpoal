#include <stdio.h>
#include <conio.h>

void main() {
    int hours, minutes, seconds;
    printf("Enter time like x:x:x = ");
    scanf_s("%d:%d:%d", &hours, &minutes, &seconds);
    printf("hours = %d\minutes = %d, seconds = %d\n", hours, minutes, seconds);
    if (hours >= 17 && hours < 23)
		printf("Good evening!");
	else if (hours >= 4 && hours < 12)
		printf("Good morning!");
	else if (hours >= 12 && hours < 17)
		printf("Good afternoon!");
	else
		printf("Good night!");
    _getch();
}