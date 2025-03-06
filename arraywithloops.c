#include<stdio.h>
int main()
{
    double prices[] = {2.4,7.5,4.5,2.6,9.5,1.5};
    printf("%d bytes \n",sizeof(prices));//each double is 8 byte.
    int j = sizeof(prices)/sizeof(prices[0]);
    for(int i = 0;i<j;i++)
        printf("\n%.2lf ",prices[i]);
        printf("%d",j);
    return 0;
}