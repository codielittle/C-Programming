#include <stdio.h>

int main()
{
    int num, sum = 0;
    
	printf("How many elements will this array have?\n");
    scanf("%d", &num);
    int array[num];
    printf("Enter %d elements\n", num);
    for (int i=0;i<num;i++)
    {
        scanf("%d", &array[i]);
        sum+= array[i];
    }
    printf("The sum is %d", sum);
	return 0;
}
