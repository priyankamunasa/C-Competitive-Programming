//find the nth term in the series
//1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187....
//it is in form....2^0,3^0,2^1,3^1,2^2,3^2,2^3,3^3,2^4,3^4,....
#include <stdio.h>
#include<math.h>
int main()
{
 int n;
 printf("enter n:");
 scanf("%d",&n);
 if(n%2==0)//when n is even
 {
     int a=pow(3,(n/2)-1);
     printf("%d",a);
 }
 else// when n is odd term
 {
     int b=pow(2,n/2);
     printf("%d",b);
 }
    return 0;
}
/*ALGORITH:
input n
odd position...n%2==1{
    pow(2,n/2)
}
even position.. .n%2==0
{
    pow(3,(n/2)-1)
}