#include<stdio.h> 

int sumOfDigits(int num);

// Function to calculate the sum of digits of a number using recursion
int sumOfDigits(int num) 
{
    if (num == 0)
       return 0;
    return (num%10 + sumOfDigits(num/10));  // Recursive statement
}

int main() 
{ 
    int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	 
    int sum = sumOfDigits(num); // Function call
    printf("Sum of digits in %d is %d\n", num, sum);
	 
    return 0; 
}

