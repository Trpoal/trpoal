#include <stdio.h>
#include <conio.h>
void main() {
	float growth, weight, s = 0;
	char buffer;
	printf("Enter your gender (M or F):");
	scanf_s("%c", &buffer);
	printf("Enter your growth(cm):");
	scanf_s("%g", &growth);
	printf("Enter your weight(kg):");
	scanf_s("%g", &weight);
	growth = growth / 100;
	s = weight / (growth*growth);
	printf("Your resalt:");
	if (buffer == 'M')
	{
		if (s <= 18)
			printf("Underweight!\n");
		if (s > 18 && s <= 25)
			printf("Normal weight\n");
		if (s > 25 && s <= 29.9)
			printf("Overweight(pre - obese)\n");
		if (s > 30 && s <= 34.9)
			printf("Obesity I degree\n");
		if (s > 35 && s <= 39.9)
			printf("Obesity II degree\n");
		if (s > 40)
			printf("Obesity III degree\n");
	}
	else
	{
		if (s <= 18)
			printf("Underweight!\n");
		if (s > 18 && s <= 23.9)
			printf("Normal weight\n");
		if (s > 24 && s <= 29.9)
			printf("Overweight(pre - obese)\n");
		if (s > 30 && s <= 34.9)
			printf("Obesity I degree\n");
		if (s > 35 && s <= 39.9)
			printf("Obesity II degree\n");
		if (s > 40)
			printf("Obesity III degree\n");
	}
	_getch();
}