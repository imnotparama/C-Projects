#include<stdio.h>
#include<string.h>

int main(){
    //while loop = executes a specific section of code unlimited number of times 
    //WHILE the condition remains true
    char name[25];
    
    printf("Enter Your name: ");
    fgets(name,25, stdin);

    while(name[0] == '\n'){
        printf("You did not enter your name!!\n");
        printf("Enter Your name: ");
        fgets(name,25,stdin);
    }
    
    printf("Hello %s\n", name);
    return 0;
}
