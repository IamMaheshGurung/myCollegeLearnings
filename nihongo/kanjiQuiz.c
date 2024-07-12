



#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>




int main()
{
    char questions[][100] = {"1. which one of the following is kanji of 'FIRE' ?", 
                            "2. Kanji of water? ", 
                            "3. '大' What is meaning of this ?", 
                            "4. 上　means ? ", 
                            "5. Which one is Kanji of sun?"};

    char options[][100] = {"A. 水",　"B.　大", "C. 火", "D.日 ",
                            "A.金 ", "B.止 ", "C.水 ", "D.林 ", 
                            "A. Big", "B. Small ", "C.Long ", "D.Short ",
                            "A. Small","B. Beautiful", "C. Happy", "D. Up",
                            "A. 日", "B. 月", "C. 木", "D. 人"};
    char answer[5]={'C', 'C', 'A', 'D', 'A'};

    char guess;
    int score = 0;


    int totalQn = sizeof(questions)/sizeof(questions[0]);


    printf("***************KANJI QUIZ*************\n");

    for(int i = 0; i < totalQn; i++)
    {
        printf("----------------------------------\n");
        printf("%s\n", questions[i]);
        printf("----------------------------------\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }


        printf("Your Answer :");
        scanf(" %c", &guess);
        

        guess = toupper(guess);

        if(guess == answer[i])
        {
            printf("Correct!\n");
            score++;


        }
        else 
        {
            printf("Wrong!\n");
            printf("Correct Answer is %c\n", answer[i]);
            
        }
        printf("******************************************\n");
        printf("The Total Score is %d/%d.\n", score, totalQn);
    }

    



    return 0;
}
