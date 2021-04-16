#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("enter the no of rwo \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",j);
            //(j)are used for print the column like 1,2,3,4,5 are as printed in pattern

        }
        printf("\n");
    }
}
