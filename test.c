#include <stdio.h>

void main()

 {

  unsigned int num;

  int i;

  scanf("%u",&num);

  for(i=0;i<16;i++)

   {

    printf("%d",(num<1<<15)?1:0);

    }

   return 0;

}