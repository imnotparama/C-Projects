//circumference calculator program
#include<stdio.h>
int main(){
    const double PI = 3.14159;
    float circumference;
    float radius;
    float area;
    printf("Enter the radius of the Circle :");
    scanf("%f",&radius);
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("The Circumference of the Circle is : %.2f\n",circumference);
    printf("The area of th circle is :%.2f\n",area);
    return 0;
}