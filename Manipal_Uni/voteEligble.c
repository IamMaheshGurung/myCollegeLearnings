/*
*fileName: voteElible.c
*Author :Mahesh Gurung
*Date: 15 June 2024
*Description*: A program to check if a person is eligble for voting or not/
*input age required*/

#include <stdio.h>

int main(){

int age;
printf("Enter your age: \n");
scanf("%d", &age);

if(age<18){
printf("sorry you are not eligeble for voting \n");
}

else{
printf("you can vote \n");
}
return 0;
}
