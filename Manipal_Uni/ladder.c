#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>






int main(){
      printf("Welcome to rock paper and scissor game\n");
      printf("\n");
      printf("Rules: \n");

      int man;
      int comp;
      char response;


      do{
          printf("Please Press \n1 for Rock, \n2 for paper, \n3 for scissor\n");
          scanf("%d", &man);
          do
          {
          if(man == 1){
              printf("YOU : Rock\n");
          }
          else if(man == 2){
              printf("YOU : Paper\n");
          }
          else if(man == 3){
              printf("YOU : Scissor\n");
          }
          else{
              printf("Enter correct number\n");
          }
          }while(man > 3 || man < 0);

          srand(time(NULL));
          comp = rand() % 3 + 1;
        
          
          
          if(comp == 1){
              printf("COMP : Rock\n");
          }
          else if(comp == 2){
              printf("COMP : Paper\n");
          }
          else {
              printf("COMP : Scissor\n");
          }
          
        if(man == comp){
            printf("Draw\n");
        }
        else if(man == 3 && comp == 1){
            printf("YOU LOOSE\n");
        }
        else if(man > comp){
            printf("YOU WIN\n");
        }
        else{
            printf("YOU LOSE\n");
          }
        printf("Wanna Play Again (Y/N)\n");
        scanf("%c", &response);
        response = toupper(response);

      }while(response=='Y');

    return 0;
}
