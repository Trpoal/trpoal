#include <stdio.h>
#include <conio.h>
#include <cstring> 
#include <windows.h>

void main() {
    char string[80];
    float len = 120;
    printf_s("Enter string\n");
    gets_s(string);
    len = (len - strlen(string))/2;
    system("cls");
    for (int i = 0 ; i <= len; i++)
        printf_s(" ");
    printf_s("%s", string);
    _getch();
}
