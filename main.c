#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int a, b, c;
	char operator;
	
	printf("Please enter a expression");
	scanf("%d %c %d", &a, &operator, &b);
	
	switch (operator)
	{
		case '+':
			c = add(a, b);
			break;
		case '-':
			c = sub(a, b);
			break;
		case '*':
			c = multi(a, b);
			break;
		case '/':
			c = div(a, b);
			break;
	}
	
	printf("result is %d.\n", c);
	printf("test");
	return 0;
}
 
int add(int a, int b)
{
	return a + b;
}
 
int sub(int a, int b)
{
	//TODO implementation
	return a-b;
}
 
int multi(int a, int b)
{
	//TODO implementation
	return a*b;

 
int div(int a, int b)
{
	int result = 0;
	result = a / b
	return result;
}
