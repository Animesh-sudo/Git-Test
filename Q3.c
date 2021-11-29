// 2D matrix part 2

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

            if(*(*(a+i)+j)>5)
            {
                *(*(a+i)+j) = 1;
            }
            else
            {
                *(*(a+i)+j) = 0;
            }
        }
    }

    printf("\n\n");

    printf("The modified array: \n");

    for(i=0; i<noOfRows; i++)
    {
        for(j=0; j<noOfCols; j++)
        {
            printf("%d ", *(*(a+i)+j));
        }
        printf("\n");
    }

    return 1;
}