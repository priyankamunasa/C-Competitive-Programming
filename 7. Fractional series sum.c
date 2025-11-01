#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        int fact = 1; 
        for (int j = 1; j <= i; j++) {
            fact *= j; 
        }
        sum += (double)(i * i) / fact; 
    }
    printf("The sum of the series is: %lf\n", sum);
    return 0;
}
