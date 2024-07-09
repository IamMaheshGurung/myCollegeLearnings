#include <stdio.h>
#include <string.h>



int main(){
    //lets create an double array of company with three platoon and with 3 section each
    int company[3][3];

    company[0][0]=1;
    company[0][1]=2;
    company[0][2]=3;
    company[1][0]=4;
    company[1][1]=5;
    company[1][2]=6;
    company[2][0]=7;
    company[2][1]=8;
    company[2][2]=9;
    int count;

    int Platoon = sizeof(company)/sizeof(company[0]);
    int Section = sizeof(company[0])/sizeof(company[0][0]);

    printf("\nIn Alpha Company we have %d Platoon and %d Section...\n", Platoon, Section);

    for(int i = 0; i < Platoon; i++){
        count = i + 1;
        printf("**Section %d ** \n", count);
        for(int j = 0; j< Section; j++){
            printf("%d  ",company[i][j]);

        }
        printf("\n");
    }
    
    char uName[100];
    char CoyName[6][50];

    strcpy(CoyName[0], "Alpha");

    printf("%s\n", CoyName[0]);
    printf("Enter your Name:\n");
    fgets(uName, sizeof(uName),stdin);

    //uName[strcspn(uName,"\n")]=0;
    strcpy(CoyName[1], uName);

    printf("%s\n", CoyName[1]);
    
    return 0;
    }

            
