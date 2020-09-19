// write a program division by two number .
#include<stdio.h>
float Division(int,int,double *);
typedef int BOOLEAN;
#define TRUE 1
#define FALSE 0

int main()
{
	int iNo1=0,iNo2=0;
	double dAns=0.0;
	BOOLEAN bRet = FALSE ;
	printf("Enter a First Number :\n");
	scanf("%d",&iNo1);
	printf("\n Enter a last Number :\n");
	scanf("%d",&iNo2);
	
	bRet = Division(iNo1,iNo2,&dAns);
	
	if(bRet == FALSE)
	{
		printf("Eroor : Invalid Input :");
	}
	else
	{	
		printf("Division is  :%lf",dAns);
	}
	return 0;
}
float Division(int iNo1,int iNo2, double *pData)
{
	
	double dRet=0.0;
	
	if(iNo2 == 0)
	{
		return FALSE;
	}
	dRet = (double)iNo1 / (double)iNo2 ;
	*pData =dRet;
	return TRUE;
}
