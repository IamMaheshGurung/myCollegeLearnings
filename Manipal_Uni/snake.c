/*
 * Title : Snake and Ladder Game;
 * Author : Mahesh Gurung;
 * Remarks : Trying to use basic C
 * */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>


char court[10][10];
int players;
#define MAX_PLAYER 4
#define MAX_LENGTH 50
char player[MAX_PLAYER][MAX_LENGTH];




void printCourt();
void resetCourt();
int entry();
void detail(int players);
void buffer();



int main(){
    

    printf("****************************************\n");
    printf("****WELCOME TO SNAKE AND LADDER GAME****\n");
    entry();
    detail(players);
    resetCourt();
    printCourt();






    return 0;
}



int entry(){

    do{
    printf("Enter Players from 2 to 4: ");
    scanf("\n %d", &players);
    buffer();
    }while(players < 2 || players > 4);
    return players;
    }

void detail(int players){
    if(players > 0){
        for(int i = 0; i < players; i++){
        printf("Enter your Players Name: ");
        fgets(player[i], MAX_LENGTH, stdin);
        player[i][strcspn(player[i], "\n")] = 0;
        }
        
    }
    for(int i = 0; i < players; i++){
        printf("%s\n", player[i]);
        }

}




void resetCourt(){
    for(int i = 0; i<10; i++){
        for(int j = 0; j < 10; j++){
            if(i == 9 && j == 0){
                court[i][j] = 'S';
            }
            else{
            court[i][j] = ' ';
            }
        }
    }
}


void printCourt(){
    printf("\n|---------------------------------------|\n");
    printf("| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", court[0][0], court[0][1],court[0][2], court[0][3],court[0][4], court[0][5],court[0][6], court[0][7],court[0][8], court[0][9]);
    printf("\n|---|---|---|---|---|---|---|---|---|---|\n");
    printf("| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", court[1][0], court[1][1],court[1][2], court[1][3],court[1][4], court[1][5],court[1][6], court[1][7],court[1][8], court[1][9]);
    printf("\n|---|---|---|---|---|---|---|---|---|---|\n");
    printf("| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", court[2][0], court[2][1],court[2][2], court[2][3],court[2][4], court[2][5],court[2][6], court[2][7],court[2][8], court[2][9]);
    printf("\n|---|---|---|---|---|---|---|---|---|---|\n");
    printf("| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", court[3][0], court[3][1],court[3][2], court[3][3],court[3][4], court[3][5],court[3][6], court[3][7],court[3][8], court[3][9]);
    printf("\n|---|---|---|---|---|---|---|---|---|---|\n");
    printf("| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", court[4][0], court[4][1],court[4][2], court[4][3],court[4][4], court[4][5],court[4][6], court[4][7],court[4][8], court[4][9]);
    printf("\n|---|---|---|---|---|---|---|---|---|---|\n");
    printf("| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", court[5][0], court[5][1],court[5][2], court[5][3],court[5][4], court[5][5],court[5][6], court[5][7],court[5][8], court[5][9]);
    printf("\n|---|---|---|---|---|---|---|---|---|---|\n");
    printf("| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", court[6][0], court[6][1],court[6][2], court[6][3],court[6][4], court[6][5],court[6][6], court[6][7],court[6][8], court[6][9]);
    printf("\n|---|---|---|---|---|---|---|---|---|---|\n");
    printf("| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", court[7][0], court[7][1],court[7][2], court[7][3],court[7][4], court[7][5],court[7][6], court[7][7],court[7][8], court[7][9]);
    printf("\n|---|---|---|---|---|---|---|---|---|---|\n");
    printf("| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", court[8][0], court[8][1],court[8][2], court[8][3],court[8][4], court[8][5],court[8][6], court[8][7],court[8][8], court[8][9]);
    printf("\n|---|---|---|---|---|---|---|---|---|---|\n");
    printf("| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", court[9][0], court[9][1],court[9][2], court[9][3],court[9][4], court[9][5],court[9][6], court[9][7],court[9][8], court[9][9]);
    printf("\n|---------------------------------------|\n");
    printf("\n");
}

void buffer(){
    while(getchar() != '\n');
}









