#include <stdio.h>
int main()
{
int total_amt,item,quantity,discount,tax,amt;

printf("Enter the Price of Item :");
scanf("%d",&item);
printf("Enter the quantity :");
scanf("%d", &quantity);
printf("The discount is :20%% OFF");
(item * quantity) = amt;
discount = amt - (amt*20)/100;
printf("The GST Tax is :17%% ");
tax = (amt * 17)/100;

printf("********* THE BILL ***********");
printf("Price of Item %d:", item);
printf("Number of Items %d :",quantity);
printf("Disount 17%% %d",discount);
printf("The GST Tax is : %d",tax);
total_amt = (amt - discount) + tax;

printf("********* TOTAL BILL ***********");
printf("Total Bill: %d",total_amt);

return 0;
}