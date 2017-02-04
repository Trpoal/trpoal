
#include <stdio.h>
#include <stdlib.h>

#define S 20
#define N 80
#define STACK_OVERFLOW  -100
#define STACK_UNDERFLOW -101
#define OUT_OF_MEMORY   -102

typedef struct Stak
{
	char *ch;
	struct Stak *next;

} Stack;

void push(Stack **head, int X)
{
    Stack *tmp = malloc(sizeof(Stack));
	if (tmp == NULL) {
		exit(STACK_OVERFLOW);
	}
	tmp->next = *head;
	tmp->ch = X;
	*head = tmp;
}
int main()
{
	char X[N];
	printf("Enter string\n");
	Stack *head = NULL;
	Stack *tmp;;
	gets(X);
	for (int i = 0; i < strlen(X); i++)
	{
		if (i == 0)
			push(&head, &X[i]);
		if (X[i] == ' ')
		{
			push(&head, &X[i + 1]);
		}
	}

	printf("Magic\n");
	char r;
	while (head)
	{
		r = *(head->ch++);
		while ((r != ' ')&&(r!='\0'))
		{
			printf("%c", r);
			r = *(head->ch++);
		}
		head = head->next;
		printf(" ");
	}
	getchar();
	return(0);
}
