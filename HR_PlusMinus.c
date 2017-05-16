#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    float fract1 = 0.0, fract2 = 0.0, fract3 = 0.0;
    for (int i=0;i<n;i++)
    {
        if (array[i] > 0)
        {
            fract1++;
        }
        else if(array[i] < 0)
        {
            fract2++;
        }
        else fract3++;
    }
    printf("Positive %f, Negative %f, 0 %f\n", fract1, fract2, fract3);
    fract1 = fract1/n;
    fract2 = fract2/n;
    fract3 = fract3/n;
    printf("%f\n", fract1);
    printf("%f\n", fract2);
    printf("%f\n", fract3);

   
    return 0;
}
