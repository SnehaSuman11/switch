
#include<stdio.h>
int main()
{
int ch;
printf(" 1.Pizza,Rs 239 \n 2.Burger,Rs 129 \n 3.Pasta,Rs 179 \n
4.French Fries,Rs 99 \n 5.Sandwich,Rs 149 \n");
printf("Enter Your Choice :-\n");
scanf("%d",&ch);
switch(ch)
{
 case 1:printf("FOOD ITEM-Pizza \n Price-Rs 239\n");
        break;
 case 2:printf("FOOD ITEM-Burger \n Price-Rs 129\n");
        break;
 case 3:printf("FOOD ITEM-Pasta \n Price-Rs 179\n");
        break;
 case 4:printf("FOOD ITEM-French Fries \n Price-Rs 99\n");
        break;
 case 5:printf("FOOD ITEM-Sandwich \n Price-Rs 149\n");
        break;
 default:printf("Proper choice was not entered");
}
return 0;
}
