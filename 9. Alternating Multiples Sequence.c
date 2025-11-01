//series....0,0,7,6,14,12,21,18,28,24,....
//odd positions....7 multiples
//even positions....6 multiples
//7*0,6*0,7*1,6*1,7*2,6*2,7*3,6*3,....
#include <stdio.h>
int main()
{
 int n,x,y;
 printf("enter n:");
 scanf("%d",&n);
 if(n%2==0)//even position ...6 multiples
 {
     x=6*((n/2)-1);
     printf("%d",x);
 }
 else//odd position...7 multiples
 {
    y=7*(n/2);
     printf("%d",y);
 }
    return 0;
}
