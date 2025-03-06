#include<stdio.h>
int main(){
    char name[25];
    int age ;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter Your Age : ");
    scanf("%d",&age);
    printf("Hello %s , you are %d years old.\n",name,age);
    return 0;
}