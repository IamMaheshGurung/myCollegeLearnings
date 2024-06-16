//Simple Calculator

/* Second Exercise Online Manipal BCA first Sem*/


#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b,res, ch;

printf("\t************************");

printf("\n\tMENU\n");

printf("\t************************");

printf("\n\t(1)Addition");
printf("\n\t(2)Subtraction");
printf("\n\t(3)Multiply");
printf("\n\t(4)Division");
printf("\n\t(5)Remainder");
printf("\n\t(0)Exit");

printf("\n\n\tEnter your choice");
scanf("%d", &ch);

if(ch<=5 & ch >0){
printf("ENter two numbers*\n");
scanf("%d%d", &a, &b);
}
switch(ch){
case 1: 
res = a + b;
printf("\n Addition :  %d", res);
break;

case 2:
res =a - b ;
printf("\n Subtraction: %d", res);
break;

case 3:
res = a * b;
printf("\n Multiplication: %d", res);
break;

case 4:
res= a/b;
printf("\n Division*: %d", res);
break;

case 5:
res = a%b;
printf("\n Remainder: %d", res);
break;

case 0:
printf("\n Choice is terminated"); exit(0);
break;

default:
printf("\n Invalid Choice");

}
return 0;
}


