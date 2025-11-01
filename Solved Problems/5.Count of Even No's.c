#include<stdio.h>
int main()
{
    int i,c=0,m,n;
    printf("enter start and end value:");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            c++;
        }
    }
    /*for(i=21;i<=60;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            c++;
        }
    }*/
    printf("total number of even numbers btw 21 and 60 are %d",c);
}