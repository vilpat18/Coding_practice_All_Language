#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node *pNext;
	int iData;
};
typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;
void InsertFirst(PPNODE,int);
void DisplayList(PNODE);
int CountNode(PNODE);
void SmallDigit(PNODE);
void BigDigit(PNODE);
void ReverseDisplay(PNODE);
int main()
{
	int iCount=0;
	PNODE pFirst=NULL;
	InsertFirst(&pFirst,11);
	InsertFirst(&pFirst,28);
	InsertFirst(&pFirst,17);
	InsertFirst(&pFirst,45);
	InsertFirst(&pFirst,6);
	InsertFirst(&pFirst,89);
	DisplayList(pFirst);
	iCount=CountNode(pFirst);
	SmallDigit(pFirst);
	BigDigit(pFirst);
	ReverseDisplay(pFirst);

	return 0;

}
void InsertFirst(PPNODE pHead,int iNo)
{
	PNODE NewNode=NULL;
	NewNode=(PNODE)malloc(sizeof(NODE));
	NewNode->iData=iNo;
	NewNode->pNext=NULL;
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
int CountNode(PNODE pHead)
{
	int iCount=0;
	while(pHead != NULL)
	{
		iCount ++;
		pHead=pHead->pNext;
	}
	return iCount;
}
void DisplayList(PNODE pHead)
{
	while(pHead != NULL)
	{
		printf("->|%d|",pHead->iData);
		pHead=pHead->pNext;
	}
	printf(" NULL");
}
void SmallDigit(PNODE pHead)
{
	
	PNODE Temp=pHead;
	int iSum=1,iRem =0;
	printf("\n\n Small Digit");
	while(Temp != NULL)
	{	
		while(Temp->iData != 0 )
		{
			iRem=  Temp->iData %10;
			iSum=iRem;
			Temp ->iData=Temp->iData /10;
			if(iSum < iRem)
			{
				iSum=iRem;
			}	
		}
		printf("\t%d",iSum);

	iSum  = 0;
	Temp=Temp->pNext;	
	}
}
void BigDigit(PNODE pHead)
{
	
	PNODE Temp=pHead;
	int iSum=0,iRem =0;
	printf("\n\n Big Digit");
	while(Temp != NULL)
	{	
		iRem=Temp->iData %10;
		iSum=iRem;
		Temp ->iData=Temp->iData /10;
		if(iSum < iRem)
		{
			iSum=iRem;
		}	
		printf("%d",iSum);
		//iSum  = 0;
		Temp=Temp->pNext;	
	}
}
void ReverseDisplay(PNODE pHead)
{
	int iCount=CountNode(pHead);
	PNODE Temp=pHead;
	PNODE pPrev=NULL;
	printf("\n\n Reverse Display :");
	while(Temp->pNext != NULL)
	{
		Temp=Temp->pNext;
	}
	while(Temp != pHead)
	{
		printf("->|%d|",Temp->iData);
		
	} 
}