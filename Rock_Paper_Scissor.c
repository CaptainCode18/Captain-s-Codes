#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen_random_num(int n){
    srand(time(NULL));
    return rand()%n;
}

int greater(char c1,char c2){
    if(c1==c2){
        return -1;
    }
    if ((c1=='R')&&(c2=='S')){
        return 1;
    }
    else if ((c2=='R')&&(c1=='S')){
        return 0;
    }
    if ((c1=='P')&&(c2=='R')){
        return 1;
    }
    else if ((c2=='P')&&(c1=='R')){
        return 0;
    }
    if ((c1=='S')&&(c2=='P')){
        return 1;
    }
    else if ((c2=='S')&&(c1=='P')){
        return 0;
    }
}
int main(){
    int playerScore=0, compScore=0, temp;
    char playerChar, compChar;
    char dict[]={'R','P','S'};
    printf("Welcome to Rock, Paper, Scissor!\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissor.\n");
        printf("Player 1's turn: \n");
        scanf("%d",&temp);
        getchar();
        playerChar=dict[temp-1];
        printf("You choosed: %c\n\n",playerChar);

        printf("Computer's turn: \n");
        temp=gen_random_num(3)+1;
        compChar=dict[temp-1];
        printf("Computer choosed: %c\n",compChar);

        // Comparing socres:
        if(greater(compChar,playerChar)==1){
            compScore+=1;
            printf("Computer got it!\n");
        }
        else if(greater(compChar,playerChar)==-1){
            printf("It's a draw.\n");
        }
        else{
            playerScore+=1;
            printf("You got it!\n");
        }
        printf("You: %d\nComputer: %d\n\n",playerScore,compScore);
    }
    if(playerScore>compScore){
        printf("You won!!\n");
    }
    else if(playerScore<compScore){
        printf("Computer won!\n");
    }
    else{
        printf("It's a draw.\n");
    }
    
}
