#include <stdio.h>
void main()
{
int i=1,j;
do{
     j=1;

     do{
        printf("* ");
        j++;
       }while (j<=i);

    printf("\n");
    i++;
  }while(i<=5);
  
printf("\n");

}