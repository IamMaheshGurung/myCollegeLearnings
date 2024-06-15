/*Adding two numbers given by user*/

#include <stdio.h>


int main()
{
int a;
int b;
int c;

printf("Sum Calculator\n");

printf("Enter first number:\n");
scanf("%d", &a);

printf("Enter second number: \n");
scanf("%d", &b);

c=a+b;

printf("The sum of your number is %d\n", c);

return 0;
};

