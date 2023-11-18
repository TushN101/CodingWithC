// C program to illustrate call by value
#include <stdio.h>
void swap(int x, int y);
int main()
{
	int a = 10, b = 20;
	printf("Orignal values:\na = %d b = %d\n", a, b);
	swap(a, b); // Actual Parameters
	printf("In the main:\na = %d b = %d\n", a, b);
	return 0;
}
void swap(int x, int y) // Formal Parameters
{
	int temp = x;
	x = y;
	y = temp;
	printf("Inside Function:\nx = %d y = %d\n", x, y);
}
