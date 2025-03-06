#include<stdio.h>
int findmax(int x,int y){
    return (x>y)?x:y;
}
int main(){
    //ternary operator = condition ? value_if_true : value_if_false
    int max = findmax(9,6);
    printf("%d",max);
    
}