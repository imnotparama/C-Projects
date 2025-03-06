#include<stdio.h>
void sort(int num[],int n){
    int i,j,temp;
for(i= 0; i < n - 1; i++){

for(j= 0; j < n -i-1; j++){

if (num[j] > num[j + 1]){ // Change to > for ascending order

                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }    
}
void printarray(int num[],int n){
    int i ;
    for(i = 0;i < n;i++){
        printf("%d ",num[i]);
        }
}
int main(){
    int num[] = {5,6,7,9,1,2,3,10,4};
    int n = sizeof(num)/sizeof(num[0]);
    sort(num,n);
    printarray(num,n);

    return 0;
}