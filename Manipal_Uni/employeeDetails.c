#include <stdio.h>
//here defining a structure to hold employee detai
struct Employee{
    int ID;
    char name[50];
    int salary;
};
//main function starts from here

int main(){
	struct Employee employee;//setting a variable to hold employee details;
    printf("Enter employee ID: "); //getting prompt for details
    //reading the employee id from user input
    scanf("%d", &employee.ID);

    //prompt the user to enter the empoylee name 
    printf("Enter his or her name: ");
    //Read the employee name from the user
    scanf("%s", employee.name);
//same for the Salary
    printf("Enter his or her Salary: ");
    scanf("%d", &employee.salary);

    //Now displaying this
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", employee.ID);
    printf("Name: %s\n", employee.name);
    printf("Salary: %d\n", employee.salary);
    return 0;
}

 
