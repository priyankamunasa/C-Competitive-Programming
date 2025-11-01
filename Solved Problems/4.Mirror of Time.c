#include <stdio.h>

int main()
{
    int n,rev=0,rem;
    printf("enter number:");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reversed number:%d\n",rev);
    return 0;
}
