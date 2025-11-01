#include <stdio.h>
#include<math.h>
int main()
{
    int n,first,last,digit,swap;
    printf("enter the number: ");
    scanf("%d",&n);
    digit=(int)log10(n);//log10----to get number of digits in a number
    first=n/pow(10,digit);
    last=n%10;
    swap=last*pow(10,digit)+(n%(int)pow(10,digit)-last+first);
    printf("swapped number: %d",swap);
}
/*eg:2345
o/p---5342
*/