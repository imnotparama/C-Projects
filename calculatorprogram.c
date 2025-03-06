#include<stdio.h>
int main(){
    char operator;
    double num1, num2;
    printf("\nEnter the first number: ");
    scanf("%lf",&num1);
    printf("\nEnter the second number :");
    scanf("%lf",&num2);
    printf("\nEnter the operator (+, -, *, /): ");
    scanf(" %c",&operator);
    switch (operator)
    {
        case '+':
            printf("Result :%lf", num1 + num2);
            break;
        case '-':
            printf("Result :%lf", num1 - num2);
            break;
        case '*':
            printf("Result :%lf", num1 * num2);
            break;
        case '/':
            if (num2 != 0){
                printf("Result :%lf", num1 / num2); 
            }     
            else{
                printf("Infinity.");
            }
            break;
        default:
            printf("\nEnter a valid Number or Operator !!.");
    }
}