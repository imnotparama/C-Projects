//intro to if statements
#include<stdio.h>
int main(){
    int age;
    printf("\nEnter your age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("\nYou are eligible to Vote.");    
    }
    else if(age <= 0){
        printf("\nEnter a valid age.");
    }
    else{
        printf("\nYou are too Young and not eligible to Vote.");
    }
}