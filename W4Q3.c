#include <stdio.h>
int checkIfPrime(int a);

int main()
{
    int number;
    printf("Enter an integer\n");
    scanf("%d", &number);
    
    if (checkIfPrime(number) == 1)
        {
            printf("%d is not a prime number", number);
        }
    else printf("%d is a prime number", number);
	return 0;
}

int checkIfPrime(int a)
{
    for (int i=2;i<a/2;i++)
    {
        if (a % i == 0)
        {
            return 1;
        }
        else return 0;
    }
    return 0;
}
