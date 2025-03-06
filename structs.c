#include<stdio.h>
#include<string.h>

struct Player{
    char name[20];
    int score;


};
int main (){
    /* Struct - collection of related members (variables)
    they can be different data types
    listed under one name in a block of memory
    Very similar to classes in other language (but no methods)*/
    struct Player player1;
    struct Player player2;
    strcpy(player1.name,"John");
    player1.score = 100;
    strcpy(player2.name,"Jane");
    player2.score = 200;

    printf("\n%s" , player1.name);
    printf("\n%d",player1.score);
    printf("\n%s" , player2.name);
    printf("\n%d",player2.score);

    return 0;
}