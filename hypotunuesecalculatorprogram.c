//hypotunuese calculator program
#include<stdio.h>
#include<math.h>
int main(){
    double A;
    double B;
    double C;
    printf("Enter the value of A: ");
    scanf("%lf",&A);
    printf("Enter the value of B: ");
    scanf("%lf",&B);
    C = sqrt(A*A+B*B);
    printf("The value of C is: %.2lf",C);
    return 0;
}