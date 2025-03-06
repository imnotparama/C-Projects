#include<stdio.h>
#include<stdbool.h>
int main(){
    //  Not logical operators = ! (not) reverse the state of condition
     bool sunny = 0;
     if(!sunny){
        printf("It's CLoudy outside");
     }
     else{
        printf("It's sunny outside");
     }
     return 0;

}