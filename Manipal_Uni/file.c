#include <stdio.h>


int main()
{







    FILE *pFile = fopen("myfile.txt", "w");
    fprintf(pFile, "HI Thank you for Looking this file\n");
    fclose(pFile);

    return 0; 
}
