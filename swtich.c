#include<stdio.h>

int main()
{
	int choice;
	printf("Please enter your choice byte\n");
	scanf("%d",&choice);
	
	switch(choice)
		{
			case 1:
				{
					printf("Chicken wrap \n Price = 120rs/- ");
					break;
				}
			case 2:
				{
					printf("Veg wrap \n Price = 100rs/- ");
					break;
				}
			case 3:
				{
					printf("Chicken Burger \n Price = 90rs/- ");
					break;
				}
			case 4:
				{
					printf("Pizza \n Price = 150rs/- ");
					break;
				}
			case 5:
				{
					printf("French fries \n Price = 70rs/- ");
					break;
				}
			default:
				{
					printf("Thank you for visting hotel, Please do select choice between 1 and 5!!");
				}
		}
}
		
