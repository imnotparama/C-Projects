#include<stdio.h>
int main(){
    //continue = skips rest of the code and pushes the code to next iteration
    //break = exits a loop or switch
    for(int i = 0; i < 10; i++){
        if(i == 5){
            continue;// is we use break it will stop at 4 since we break 5
            }
            printf("%d\n", i);
            }
            return 0;
}