#include <stdio.h>
#include <string.h>


typedef struct 
{
    char name[50];
    char Loc[50];
    int room;
}hotel;

void sort(hotel Hotels[],int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++){
            if(Hotels[j].room > Hotels[j+1].room)
             {
                int temp = Hotels[j].room;
                Hotels[j].room = Hotels[j+1].room;
                Hotels[j+1].room= temp;

            }
        }
    }
}
     
void print(hotel Hotels[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d... %-12s\t---->>%-12s\t----->>have %d rooms available\n",i+1, Hotels[i].name, Hotels[i].Loc, Hotels[i].room);
    }
}


int main()
{

    hotel hotel1 = {"Gora Kadan", "Hakone", 46};
    hotel hotel2 = {"Hyaat", "Hakone", 36};
    hotel hotel3 = {"Prince Hotel", "Sinagawa", 97};
    hotel hotel4 = {"AAPA Hotel", "FUkuoka", 78};

    hotel Hotels[] = {hotel1, hotel2, hotel3, hotel4};

    int size = sizeof(Hotels)/sizeof(Hotels[0]);


    sort(Hotels,size);
    print(Hotels, size);



    return 0;
}

