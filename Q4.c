//sum of the 2D matrix 

#include <stdio.h>
#include <string.h>

int main()
{
    int a[2][3], b[2][3], i, j, noOfRows =2, noOfCols =3;
    printf("Give first array");

    for(i =0; i< noOfRows; i++)
    {
        for(j = 0; j<noOfCols; j++)
        {
            printf("Enter Element (%d, %d): ",i, j);
            scanf("%d", (*(a+i)+j));
            printf("\n");
        }
    }

    printf("\n");
    printf("Give second array");

    for(i =0; i< noOfRows; i++)
    {
        for(j = 0; j<noOfCols; j++)
        {
            printf("Enter Element (%d, %d): ",i, j);
            scanf("%d", (*(b+i)+j));
            printf("\n");
        }
    }

    printf("\n");

    printf("Sum of two arrays: \n");

    for(i =0; i< noOfRows; i++)
    {
        for(j = 0; j<noOfCols; j++)
        {
            printf("%d ", (*(*(a+i)+j) - *(*(b+i)+j)));
        }
        printf("\n");
    }

}