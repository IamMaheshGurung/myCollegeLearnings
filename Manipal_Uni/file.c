#include <stdio.h>


int main()
{
    //char fileName[100];
    //printf("Which File Do You wanna Open?\n Type its Name correctly..");
    //scanf("%s", fileName);

    char buffer[255];
    FILE *pFile = fopen("//Users//srijanamahesh//Desktop//myIncome.tsv", "r");

    if(pFile != NULL) 
    
    {
        while(fgets(buffer, 255, pFile)!=NULL)
        {
            printf("%s", buffer);
        }
    }
    else
    {
        printf("Sorry File not found");
    }

    return 0; 
}
