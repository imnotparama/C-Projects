#include<stdio.h>

int main(){
    int rows, columns, number[3][3];
    rows = 3;
    columns = 3;

number[0][0] = 1;
number[0][1] = 2;
number[0][2]= 3;
number[1][0] = 4;
number[1][1] = 5;
number[1][2] = 6;
number[2][0] = 7;
number[2][1] = 8;
number[2][2] = 9;


    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

    return 0;
}