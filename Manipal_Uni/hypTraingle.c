/*
Title: Hypotenuse of a triangle calculator
Author: Mahesh Gurung;
Reason: for the practice sake
College Extra time practice
*/

#include <stdio.h>
#include <math.h>

int main(){
    //Declearation of sides of triangle
    double A;
    double B;
    double C;

    printf("\n Enter the height of triangle ie A : ");
    scanf("%lf", &A);

    printf("\nEnter the height of triangle is B : ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("the hyptenuse of the triangle ie C is %lf:", C);


    return 0;

}

