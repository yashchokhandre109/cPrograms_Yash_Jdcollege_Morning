#include <stdio.h>
void main()
{
    int week_number;
    printf("Enter the number");
    scanf("%d",&week_number);
    switch (week_number)
    {
    case 1:
    printf("monday");
        break;
    case 2:
    printf("tuesday");
        break;
    case 3:
    printf("wednesday");
        break;
    case 4:
    printf("thursday");
        break;
    case 5:
    printf("friday");
        break;
    case 6:
    printf("saturday");
        break;
    case 7:
    printf("sunday");
        break;
    default:
    printf("invalid choice");
        break;
    }
}