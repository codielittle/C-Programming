#include <stdio.h>
int lcmult(int a, int b);

int main()
{
    int x, y;
    printf("Enter two integers\n");
    scanf("%d %d", &x, &y);
    
    lcmult(x, y);


    
	return 0;
}

int lcmult(int a, int b)
{
    int z = 1;
    while (a % z != 0 || b % z != 0)
    {
        z++;
    }
    printf("The LCM is %d\n", z);
    
    return 0;
}
