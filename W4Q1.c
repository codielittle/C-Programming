#include <stdio.h>

int main()
{
    int x;
    int y; 
    int gcd;
    
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    
    gcd = x % y;
    printf("The greatest common divisor of integer %d and %d is %d\n", x, y, gcd);
    
	return 0;
}
