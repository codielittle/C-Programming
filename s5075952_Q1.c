#include <stdio.h>

int main()
{
    int x1, x2, y1, y2, r1, r2;
    printf("CIRCLE 1: What are the coordinates of X and Y, and the radius of the circle\n");
    scanf("%d %d %d", &x1, &y1, &r1);
	printf("CIRCLE 2: What are the coordinates of X and Y, and the radius of the circle\n");
    scanf("%d %d %d", &x2, &y2, &r2);
    
        
        
    if (r1 < r2 && x2 - x1 <= 1 && y2 - y1 <= 1)
    {
        printf("Circle 1 is inside Circle 2");
        
        }
    else if (r1 > r2 && r2 - r1 <= 1) 
    {
        printf("Circle 2 is inside Circle 1");
        
        }
    else if (r1 < r2 && x2 - x1 <= 1) 
    {
        printf("Circle 1 overlaps Circle 2");
        
        }
    else if (r1 < r2 && x2 - x1 > r1) 
    {
        printf("Circle 1 and Circle 2 do not overlap");
        
        }
    else
    {
        printf("error\n");
        }
    
	return 0;
}





        