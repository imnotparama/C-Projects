#include<stdio.h>
#include<ctype.h>
int main(){
    // logical operators = &&(and) checks if two or more conditions are true

    float temp;
    char sunny;
    printf("Enter temperature: ");
    scanf("%f",&temp);
    sunny = 'n';

    sunny = tolower(sunny);
    if(temp <= 30 && temp >=0 && sunny == 'y'){
        printf("It is a nice day");
        }
    else {
        printf("The Weather is not good outside!!");
    }
}