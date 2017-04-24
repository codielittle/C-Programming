#include <stdio.h>
#include <math.h>

int main()
{
    int mat1[3][3] ={
                        {3, 6, 1},
                        {2, 1, 4},
                        {5, 2, 3}
                    };
    int mat2[3][3] ={
                        {4, 1, 3},
                        {2, 5, 5},
                        {1, 2, 3}
                        };
    int sum[3][3] = {
                        {0, 0, 0},
                        {0, 0, 0},
                        {0, 0, 0}
                    };
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    
return 0;
}
