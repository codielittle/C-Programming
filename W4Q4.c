#include <stdio.h>
int checkIfPerfect(int a);
int main()
{
    int count = 0;
    while(++count < 1000)
        if(checkIfPerfect(count))
            printf("%d is perfect.\n", count);
    return 0;

}

int checkIfPerfect(int a)
{
    int sum = 0;
    for (int i=1;i<a;i++)
    {
        if (a % i == 0)
        {
            sum+= i;
        }
    }
    if (sum == a)
    {
        return 1;
    }
    
    

    return 0;
}
