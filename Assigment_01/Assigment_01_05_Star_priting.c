/*5. Accept one number from user and print that number of * on screen */
#include<stdio.h>
void Accept(int iValue);

int main()
{
	int iValue =0;
	iValue=5;
	Accept(iValue);	
	return 0;
}
void Accept(int iValue)
{
	int iCounter =0;
	for (iCounter =1;iCounter <= iValue; iCounter ++)
	{
		printf("* \t");
	}
}
