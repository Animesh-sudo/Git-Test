//2D matrix

#include <stdio.h>
#include <string.h>

int main()
{
    int a[2][3], i, j, noOfRows = 2, noOfCols = 3;
    printf("Give any array: ");

    for(i = 0; i<noOfRows; i++)
    {
        for(j=0; j<noOfCols; j++)
        {
            printf("Element (%d, %d): ", i, j);
            scanf("%d",(*(a+i)+j)); //reading
            printf("\n");
        }
    }

    printf("\n\n");
    printf("The array:\n");

    for(i = 0; i<noOfRows; i++)
    {
        for(j=0; j<noOfCols; j++)
        {
            printf("%d ", *(*(a+i)+j));
        }
        printf("\n");
    }

    return 1;     
}