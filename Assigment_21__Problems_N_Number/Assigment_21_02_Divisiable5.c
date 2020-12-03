/*
2. Accept N numbers from user and display all such elements which are
divisible by 5.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 85 80

*/
#include<stdio.h>
#include<stdlib.h>
void DivisiableFive(int arr[],int Size);
int main()
{
	int iNo=0,iCnt=0;
	int *pPtr=NULL;
	
	pPtr=(int *)malloc(iNo *sizeof(int));
	
	if(NULL == pPtr )
	{
		printf("Memory Allocation faild");
		return -1;
	}
	
	printf("Enter  The values of N :");
	scanf("%d",&iNo);

	printf("Enter a Element in Array :");	
	for(iCnt=0; iCnt < iNo ; iCnt ++)
	{
		printf("\nValues index Number [%d] is\t:",iCnt);
		scanf("%d",&pPtr[iCnt]);
	}
	
	printf("Your Entered Element : \n");
	for(iCnt =0 ;iCnt < iNo ;iCnt ++)
	{
		printf("%d\t",pPtr[iCnt]);
	}
	
	DivisiableFive(pPtr,iNo);
	
	free(pPtr);
	pPtr=NULL;		
	
	return 0;
}
void DivisiableFive(int iArr[],int iSize)
{
	int iCnt=0;
	printf("Result is :");
	for(iCnt =0 ;iCnt < iSize ;iCnt ++)
	{
		if((iArr[iCnt] % 5) == 0)
			printf("%d\t",iArr[iCnt]);
	}	
}