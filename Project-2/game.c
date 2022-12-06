  /*   # Author    : Suraj Dalvi
       # Project-2 : SWG Game
       # Game Name : Snake,Water & Gun OR Rock,Paper & Scissor
       # Working   : 1. snake and water -> snake drinks the water and win.
                     2. gun and snake -> gun shoots the snake and win.
                     3. water and gun -> gun will sink into the water and water will win.
       # Feature   : Computer is capable of playing this game with you.   */
  

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SnakeWaterGun(char you, char comp);
int main()
{
    char you,comp;
    // random number generator
    int number;
    srand(time(0));
    number = rand()%100 + 1;
    // Computer will randomly generates snake,water and gun by its own.
    if(number<33)
      comp = 's';
    else if(number>33 && number<66)
      comp = 'w';
    else
      comp = 'g'; 

    printf("\n ⭐️ SWG Game ⭐️ \n");
    printf("Enter 's' for snake,'w' for water and 'g' for gun: ");
    scanf("%c",&you);
    if(you!='s' && you!='w' && you!='g')
     {
        printf("Wrong Choice!😇\n");
     }
    else{
    int result = SnakeWaterGun(you,comp);
    printf("You choose '%c' and Computer choose '%c' -> ",you,comp);
    if(result==0)
      printf("Game Draw!🤩\n");
    else if(result==1)
      printf("You Win!🥇\n");
    else
      printf("You Lose!😭\n");
    return 0;
  } 
}

int SnakeWaterGun(char you, char comp){
   // returns 1 if you win, -1 if you lose and 0 if draw
   
   // condition for draw
   // Cases covered -> ss,gg,ww
   if(you==comp)
   {
      return 0;
   }

   // Non-draw condition
   // Cases covered -> sw,ws,sg,gs,wg,gw
   if(you=='s' && comp=='w')
       return 1;
   else if(you=='w' && comp=='s')
       return -1;
   
   if(you=='s' && comp=='g')
       return -1;
   else if(you=='g' && comp=='s')
       return 1;
    
   if(you=='w' && comp=='g')
       return 1;
   else if(you=='g' && comp=='w')
       return -1;
}