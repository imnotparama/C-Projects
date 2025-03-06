/*variable = allocated space in memory to store a value 
we refer to a variable's name to access the stored value 
that variable now behaves as if it was the value it contains
BUT we need to declare what type of data we are storing*/
#include<stdio.h>
int main(){
    int x;//declration
    x = 123;//intialization
    int y = 321; //declaration + initialization
    int age = 17; //integer
    float gpa = 9.28;//Floating point number
    char grade = 'A';//single character
    char name[] = "Parama";//array of characters

    printf("Hello %s\n",name);
    printf("You are %d years old\n", age);
    printf("Your GPA is %f\n", gpa);
    printf("Your Grade is %c\n", grade);
    return 0;
}