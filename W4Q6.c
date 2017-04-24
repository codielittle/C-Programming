#include <stdio.h>

int numGuess(int num, int g);

int main()
{
    int number = 0;
    int guess;
    number = rand() % 1000;
    
    while (guess != number)
    {
        printf("Guess the number between 1 - 1000\n");
        scanf("%d", &guess);
        numGuess(number, guess);
    }
    
    return 0;

}

int numGuess(int num, int g)
 {
         if (g<num)
         {
             printf("Your guess of %d is too low!!\n You need to guess higher\n", g);
         }
         else if(g>num)
         {
             printf("Your guess of %d is too high!!\n You need to guess lower\n", g);
         }
         else 
         {
             printf("Congratulations! You guessed the number %d correctly\n", num);
         }
        
     
     return 0;
 }
 
