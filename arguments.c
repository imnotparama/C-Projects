#include<stdio.h>

void birthday(char x[])
{
   printf("\nHappy birthday dear %s!", x);
   
}

int main()
{
   char name[] = "Ex";
   int age = 21;

   birthday(name);
   birthday(name);
   birthday(name);
   printf("\nYou are %d years old.", age);

   return 0;
}