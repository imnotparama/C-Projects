#include<stdio.h>

int main(){
    // OR =|| (or) Check atleast one condition is true
    float temp;
    printf("Enter temperature in degree celsius: ");
    scanf("%f", &temp);
    if (temp >= 35 || temp <= 0) {
        printf("The weather is bad outside.");
        }
        else {
            printf("It is a nice day");
            }
}