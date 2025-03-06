#include<stdio.h>
int main(){
    char cars[][10] ={"Mustang","Lambo","Rolls"};
    int i;
    for(i = 0;i < sizeof(cars)/sizeof(cars[0]);i++){
        printf("%s\n",cars[i]);

    }
    return 0;
    
}