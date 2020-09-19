/*Accept one number and check whether is is divisible by 5 or not.*/
#include<stdio.h>

#define TRUE 1                      
#define FALSE 0 
int Check(int iNo);
typedef int BOOL;
  

int main()
{
	int iValue = 0 ;
	BOOL bRet= FALSE;
	printf("Enter a Number  \t:");
	scanf("%d",&iValue);
	bRet= Check(iValue);
	if(bRet ==  TRUE)
		printf("Divisible by 5 :");
	else 
		printf("Not Divisible by 5 :");
			
	return 0;
}
int Check(int iNo)
{
	if((iNo % 5)==0)
	{
		return TRUE;
		
	}
	else 
	{
		return FALSE;
	}
}
