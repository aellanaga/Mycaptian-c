#include<stdio.h>
int main()
{
	int steps,i,j;
	printf("Please enter number of steps you want with 0\'s and 1\'s \n");
	scanf("%d",&steps);
for(j=0;j<steps;j++)
{
		
	for(i=0;i<=j;i++)
	{
		printf("01");
	}
	printf("\n");
}
return 0;
}
