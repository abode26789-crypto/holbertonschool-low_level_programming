#include <stdio.h>

/**
 * print_menu - Display the available calculator operations.
 */
static void print_menu(void)
{
	puts("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit");
}

/**
 * read_operand - Prompt for and read one decimal operand.
 * @name: The operand label.
 * @value: Where to store the operand.
 *
 * Return: 1 when an operand was read, 0 otherwise.
 */
static int read_operand(const char *name, double *value)
{
	printf("%s: ", name);
	fflush(stdout);
	return (scanf("%lf", value) == 1);
}

/**
 * calculate - Print the result of a valid calculator operation.
 * @choice: The menu option, from 1 to 4.
 * @a: The first operand.
 * @b: The second operand.
 */
static void calculate(int choice, double a, double b)
{
	double result;

	switch (choice)
	{
	case 1:
		result = a + b;
		break;
	case 2:
		result = a - b;
		break;
	case 3:
		result = a * b;
		break;
	default:
		if (b == 0.0)
		{
			puts("Error: division by zero");
			return;
		}
		result = a / b;
		break;
	}
	printf("Result: %g\n", result);
}

/**
 * main - Run the interactive calculator until the user quits.
 *
 * Return: 0 on exit.
 */
int main(void)
{
	int choice, status;
	double a, b;

	puts("Simple Calculator");
	for (;;)
	{
		print_menu();
		printf("Choice: ");
		fflush(stdout);
		status = scanf("%d", &choice);
		if (status == EOF)
			break;
		if (status != 1)
		{
			scanf("%*[^\n]");
			puts("Invalid choice");
			continue;
		}
		if (choice == 0)
		{
			puts("Bye!");
			break;
		}
		if (choice < 1 || choice > 4)
		{
			puts("Invalid choice");
			continue;
		}
		if (!read_operand("A", &a) || !read_operand("B", &b))
			break;
		calculate(choice, a, b);
	}
	return (0);
}
