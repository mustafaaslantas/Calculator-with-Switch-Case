#include <stdio.h>

int main()
{
	int action;
	float num1, num2;
	printf("1.Addition\n2.Subtraction\n3.Multiplation\n4.Division\n");
	printf("Enter the first number:");
	scanf("%f", &num1);

	printf("Enter the second number:");
	scanf("%f", &num2);
	
	printf("Select the case.\n");
	scanf("%d", &action);

	switch (action)
	{
		case 1: 
			printf("%.2f", (num1 + num2));
			break;

		case 2: 
			printf("%.2f", (num1 - num2));
			break;

		case 3:
			printf("%.2f", (num1 * num2));
			break;
		
		case 4:
			printf("%.2f", (num1 / num2));
			break;

	}

	return 0;
}
