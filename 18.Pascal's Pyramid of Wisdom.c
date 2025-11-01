#include<stdio.h>
#include<math.h>
int main()
{
    int n,row,s,c;
    printf("enter the value of n:");
    scanf("%d",&row);
    for(int i=0;i<row;i++)
    {
        for(int s=1;s<=row-i;s++)
        {
            printf("  ");
        }
        for(int j=0;j<=i;j++)
        {
            if(j==0||i==0)
            {
                c=1;
            }
            else
            {
                c=c*(i-j+1)/j;
            }
            printf("%4d",c);
        }
        printf("\n");
    }
}