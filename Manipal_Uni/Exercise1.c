//Write a program on a C to find the sum of Individual digits of a positive integer.

#include <stdio.h>
int main()
{
int num, k=1, sum=0;

printf("Enter the number whose digits are to be added:\n");
scanf("%d", &num);
while(num!=0)
{
k=num%10;
sum = sum + k;
k=num/10;
num=k;
}
printf("Sum of the digits: %d", sum);

return 0;

}


/*try num 15 output must be 6*/


