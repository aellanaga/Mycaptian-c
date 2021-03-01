#include<stdio.h>
/* pre process the input ouput header file*/

int main()/*declaring main function*/
{
	int a=25,b=35;/* took two integer variables a and b with values assigned 25 and 35 respectively*/
	printf("BEFORE SWAPPING VALUES OF: a=25 and b=35 \n");/*printing intial values assigned*/
    a=a+b;/*Adding a and b assigning it to a . Now a will be 60*/
    b=a-b;/*Now substract b from a . As a is 60 and b is 35 we will get updated b as 25!! So we swapped a value to b*/
    a=a-b;/*Now update the a value to intial b value by substracting updated b(35) from a which is 60 will give the a value as 35!! so the numbers are swapped*/
    printf("AFTER SWAPPING VLAUES OF: a=%d and b=%d",a,b);/*Printing final values*/
}
