#include <stdio.h>

double square(double x) {
    return x * x;
}

int main() {
    double x;
    
    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%lf", &x);
    
    // Calculate and print the square of x
    printf("Square: %.2lf\n", square(x));

    return 0;
}
    