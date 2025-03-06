#include<stdio.h>
#include<string.h>
int main(){
    char x [15]= "Water";
    char y [15]= "Lemon Juice";
    char temp [15];

    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);

    printf("\n x = %s",x);
    printf("\n y = %s",y);

    return 0;
}