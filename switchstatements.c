//switch statements it is like a if statement but its easy
#include<stdio.h>
#include<ctype.h>
int main(){
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    grade = toupper(grade);
    switch(grade){
        case 'A':
        printf("Excellent!\n");
        break;
        case 'B':
        printf("Good!\n");
        break;
        case 'C':
        printf("Try Better\n");
        break;
        case 'D':
        printf("You can do better\n");
        break;
        case 'F':
        printf("YOU FAILED!!\n");
        default:
        printf("Invalid grade\n");
        }
}