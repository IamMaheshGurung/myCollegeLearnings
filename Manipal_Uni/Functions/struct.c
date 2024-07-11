#include <stdio.h>
#include <string.h>



typedef struct
{
    char name[50];
    int age;
    char country[50];
}user;





int main(){

    user user1 = {"Mahesh Gurung", 28, "Nepal"};
    user user2 = {"Prakash Pun" , 30, "Japan"};
    user user3 = {"Arjun Gurung", 28, "America"};
    user user4 = {"Santosh Gurung", 24, "Australia"};


    user Users[]={user1, user2, user3, user4};


    for (int i = 0; i < sizeof(Users)/sizeof(Users[0]); i++)
    {
        printf("%d.  %-20s\t ---->> %d\t ---->%-20s\n", i, Users[i].name, Users[i].age, Users[i].country);
    }









    return 0;
}
