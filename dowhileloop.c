#include<stdio.h>

//do while = executes a block of code once and then check the condition,
//if the condition is true, it will execute the block of code again and again until the condition
int main(){
    int num = 0;
    int sum = 0;
    do{
        printf("Enter a number above zero :");
        scanf("%d",&num);
        if(num >0)
        {
        sum = sum + num;
        }
        }while(num > 0);
        printf("The sum of the numbers is : %d",sum);
        return 0;
    }