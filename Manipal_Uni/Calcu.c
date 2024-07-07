/* Title: simple Calulator for operators practice"
 * Author : Mahesh Gurung
 * Remarks: College projects practice
 */


#include <stdio.h>
#include <math.h>



int main(){
    char operator;
    double num1;
    double num2;
    double result;


    printf("Simple Calculator\n -----------------------------------------------\nEnter any operator (+, -, *, /, %%):");

        scanf("%c", &operator);
        
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch(operator){
            case '+' :
                result = num1 + num2;
                printf("The sum is %lf", result);
                break;

            case '-' :
                result = num1 - num2;
                printf("The result is %lf", result);
                break;

            case '*' :
                result = num1 * num2;
                printf("The result is %lf", result);
                break;
            case '/' :
                result = num1 / num2;
                printf("the result is %lf", result);
                break;
            case '%' :
                result = fmod(num1, num2);
                printf("The result is %lf", result);
                break;
            default :
                printf("Please Enter proper operator");
        }

        printf("\n********End********\n");
    return 0;
}


