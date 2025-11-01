#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,large=0;
    printf("enter no:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(rem>large)
        {
            large=rem;
        }
        n=n/10;
    }
    printf("Largest digit in the number is %d.",large);
}