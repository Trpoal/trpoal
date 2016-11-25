#include <stdio.h>
#include <conio.h>

void main() {
	int f = 4;
	printf("Hello, World!\n");
	int global = 555;
	printf("%d\n", global);
	printf("f=%d\n", f);
	int g = global + f;
	printf("f=%d\n", g);
	_getch();
}