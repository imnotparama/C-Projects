#include<stdio.h>
int main()
{
   //nested loop = a loop inside of another loop

   int rows;
   int columns;
   char symbol;

   printf("\nEnter # of rows: ");
   scanf("%d", &rows);

   printf("Enter # of columns: ");
   scanf("%d", &columns);
   printf("Enter a symbol to use: ");
   scanf(" %c", &symbol); // Note the space before %c to clear any whitespace

   for(int i = 1; i <= rows; i++)
   {
      for(int j = 1; j <= columns; j++)
      {
         printf("%c", symbol); // Print the symbol instead of the column number
      }
      printf("\n");
   }

   return 0;
}

