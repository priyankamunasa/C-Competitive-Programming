#include <stdio.h>
int main()
{
     int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
   int numerator = 1;
   int denominator = 2;
    double sum = 0.0;
    /*for (int i = 1; i <= n; i+=2) {
        sum += (double)i /(i+1); 
    }*/
    for (int i = 1;i <=n; i++) {
        sum += (double)numerator / denominator; 
        numerator += 2; 
        denominator += 2; 
    }
    printf("%lf",sum);
    return 0;
}
