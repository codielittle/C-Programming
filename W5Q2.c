#include <stdio.h>

int main(int argc, char **argv)
{
    int num;
    
	printf("How many elements will this array have?\n");
    scanf("%d", &num);
    int array[num];
    int max = array[0];
    printf("Enter %d elements\n", num);
    for (int i=0;i<num;i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i=0;i<num;i++)
    {
        if (array[i] > array[0])
        {
            array[0] = array[i];
        }
    }
    
    for (int i=0;i<num;i++)
    {
        if (array[i] < array[4])
        {
            array[4] = array[i];
        }
    }
    
    printf("The largest val is %d\n", array[0]);
    printf("The smallest val is %d", array[4]);
	return 0;
}
