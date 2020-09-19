#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
struct Node
{
	int iData;
	struct Node *pNext;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE,int);
void DisplayList(PNODE);
int AdditionEven(PNODE);
void DisplayPerfect(PNODE);
void DisplayPrime(PNODE);
int	SecMaximum(PNODE);
void SumDigit(PNODE);
int main()
{
	PNODE pFirst=NULL;
	int iEven=0,Max=0;
	InsertFirst(&pFirst,320);
	InsertFirst(&pFirst,89);
	InsertFirst(&pFirst,6);
	InsertFirst(&pFirst,41);
	InsertFirst(&pFirst,17);
	InsertFirst(&pFirst,28);
	InsertFirst(&pFirst,10);
	InsertFirst(&pFirst,28);
	DisplayList(pFirst);
	iEven=AdditionEven(pFirst);
	printf("\nAddition of Even Element :%d",iEven);
	DisplayPerfect(pFirst);
	DisplayPrime(pFirst);
	Max=SecMaximum(pFirst);
	printf("\nScound Max Value is List :%d",Max);
	SumDigit(pFirst);
	
	getch();
	return 0;
}
void InsertFirst(PPNODE pHead,int iNo)
{
	PNODE NewNode=NULL;
	NewNode=(PNODE)malloc(sizeof(NODE));
	NewNode->pNext=NULL;
	NewNode->iData=iNo;
	if(*pHead == NULL)
	{
		*pHead=NewNode;
	}
	else
	{
		NewNode->pNext=*pHead;
		*pHead=NewNode;
	}
}
void DisplayPerfect(PNODE pHead)
{
	int iCounter,perfact=0;
	PNODE Temp=pHead;

	printf("\nPerfect Number :");
	while(Temp != NULL)
	{	
		for(iCounter =1 ; iCounter < Temp->iData ;iCounter ++)
		{
			if (Temp->iData % iCounter  == 0)
			{
				perfact=perfact + iCounter;
			}	
		}
			if(perfact == Temp ->iData)
			{
	 			   printf("%d\t",perfact);
				   perfact = 0;
			}
			Temp = Temp->pNext;
	}
		
}	
void DisplayPrime(PNODE pHead)
{
	int iPrime =0,iCnt=0,iNo=0;
	printf("\nprime Number is Given List :");
	while(pHead != NULL)
	{
		for(iCnt=1 ; iCnt < pHead->iData ; iCnt ++)
		{
			if(pHead -> iData % 2 == 1 ) 
			{
				iNo=1;
			}
		}
		if(iNo == 1)
			printf("%d\t",pHead->iData);
		pHead=pHead->pNext;
	} 
}
int AdditionEven(PNODE pHead)
{
	int iEven =0;
	while(pHead !=NULL)
	{
		if(pHead -> iData % 2==0)
		{	
			iEven=iEven + pHead->iData;
		}
		pHead=pHead->pNext;
	}
	return iEven;
}
int SecMaximum(PNODE pHead)
{
	PNODE Temp=pHead;
	int iMax=0,iSmax=0,ss=0;
	while(Temp != NULL)
	{
		if(Temp ->iData > iMax)
		{
			iSmax=iMax;
			iMax=Temp ->iData;
			
		}
		else if (Temp ->iData > iSmax && Temp ->iData < iMax )
		{
			iSmax=Temp->iData;
		}
		
		Temp=Temp->pNext;
	}	
	
	return iSmax;
}
void SumDigit(PNODE pHead)
{
	
	PNODE Temp=pHead;
	int iSum=0,iRem =0;
	printf("\nSum of Digit :");
	while(Temp != NULL)
	{	
		while(Temp->iData != 0 )
		{
			iRem=  Temp->iData %10;
			Temp ->iData=Temp->iData /10;
			iSum=iSum +iRem ;
			
		}
		printf("\t%d",iSum);
		iSum  = 0;
		Temp=Temp->pNext;	
	}
}
void DisplayList(PNODE pHead)
{	
	while(pHead !=NULL)
	{
		printf("->|%d|",pHead->iData);
		pHead=pHead->pNext;
	}
}
	
