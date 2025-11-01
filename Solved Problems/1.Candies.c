#include<stdio.h>
int main()
{
    int n=10,k=5,m;
    //printf("n value and k value");
    //scanf("%d %d",&n,&k);
    printf("input value");
    scanf("%d",&m);
    if(m>=1 && m<=5)
    {
        printf("no. of candies:%d\n",m);
        printf("no. of candies left:%d\n",n-m);
    }
    else
    {
        printf("INVALID INPUT\n");
        printf("no. of candies left:%d\n",n);
    }
    return 0;
}