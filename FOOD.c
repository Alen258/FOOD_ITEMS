#include <stdio.h>
void main() 
{
    printf("Enter the number from 1 to 5:\n");
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("FOOD ITEM--BIRIYANI");
        printf("\nPRICE-Rs.599");
        break;
        case 2:
        printf("FOOD ITEM--NOODLES");
        printf("\nPRICE-Rs.399");
        break;
        case 3:
        printf("FOOD ITEM--FRIED RICE");
        printf("\nPRICE-Rs.199");
        break;
        case 4:
        printf("FOOD ITEM--MANCHURIA");
        printf("\nPRICE-Rs.299");
        break;
        case 5:
        printf("FOOD ITEM--BURGER,Sandwitch,PIZZA");
        printf("\nPRICE-Rs.499");
        break;
        default:
        printf("INVALID");
    }
}
