#include <stdio.h>
#define ROW 5
#define COLUMN 5
int main() {
   int i,j,array[ROW][COLUMN],n=1;
    for(i=1;i<=ROW;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",n);
            n+=1;
        }
        printf("\n");
    }
    return 0;
}
