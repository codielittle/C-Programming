#include <stdio.h>

int main()
{
    coinToss();
    return 0;

}

void coinToss()
{
    int guess, tailsCount = 0, headsCount = 0;
    for (int i=0;i<1000;i++)
    {
        guess = rand() % 2;
        if (guess == 1)
        {
            tailsCount++;
        }
        else headsCount++;
    }
    
    printf("Tails appeared %d times and Heads appeared %d times", tailsCount, headsCount);
    
    
    
}
