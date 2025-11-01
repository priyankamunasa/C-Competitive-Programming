#include <stdio.h>
int main()
{
    int n,sum,digit,original;
    printf("enter value of n: ");
    scanf("%d",&n);
    original=n;
    while(n>=10)
    {
        sum=0;
        while(n>0)
        {
            digit=n%10;
            sum+=digit;
            n/=10;
        }
        n=sum;
    }
    if(n==1)
    {
        printf("%d is a magic number.",original);
    }
    else
    {
        printf("%d is not a magic number.",original);
    }
    return 0;
}
/*input:1234
output--1234 is a magic number.
input:173
output--173 is not magic number.
*/