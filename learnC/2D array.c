#include<stdio.h>

int main()
{
    /* [ 1,2,3    *Matrix
         4,5,6
         7,8,9 ]*/

    int number[3][3] ={{1,2,3},
                       {4,5,6},
                       {7,8,9}};
    int row , col ;
    for(row = 0 ;row < 3 ;row++){
        for(col =0;col<3;col++){
                 printf("%d ",number[row][col]);
        }
        printf("\n");
    }

    return 0;
}
