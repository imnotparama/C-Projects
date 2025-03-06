//temperature conversion program from fahrenheit to celsius or celsius to fahrenheit
#include<stdio.h>
#include<ctype.h>

int main(){
    char unit;
    float temp;
    
    printf("Enter If the temperature is in (F) or (C): ");
    scanf("%c", &unit);
    unit = toupper(unit);

    if(unit == 'C'){
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32;
        printf("The temperature in Fahrenheit is: %.1f\n", temp);
    
    }
    else if(unit == 'F'){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5/9;
        printf("The temperature in Celsius is: %.1f\n", temp);
    }
    else{
        printf("Invalid unit.Please enter either (F) or (C).\n");
    }
}