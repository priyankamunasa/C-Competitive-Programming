#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           /*@@@@
             @  @
             @  @
             @@@@
             */
            if(i==1||i==n||j==1||j==n)
            {
                printf("@");
                //to get row as numbers 
                //printf("%d",j)...
                /*1234
                  1  4
                  1  4 
                  1234
                */
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}