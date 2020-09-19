#include<stdio.h>
#include<stdlib.h>
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
int SearchFirstOcc(PNODE ,int);
int SearchLastOcc(PNODE ,int);
int CountNode(PNODE);
int Addition(PNODE);
int Maximum(PNODE);
int Manimum(PNODE);
int main()
{
	PNODE pFirst=NULL;
	int iFirst=0,iLast=0,iCount=0,iAdd=0,iMax=0,iMin=0;
	InsertFirst(&pFirst,70);
	InsertFirst(&pFirst,30);
	InsertFirst(&pFirst,50);
	InsertFirst(&pFirst,40);
	InsertFirst(&pFirst,30);
	InsertFirst(&pFirst,20);
	InsertFirst(&pFirst,10);
	
	iCount=CountNode(pFirst);
	printf("Total CountOf Element %d:\n",iCount);
	
	iFirst=SearchFirstOcc(pFirst,30);
	printf("Itm Found First Position :%d\n",iFirst);
	
	iLast=SearchLastOcc(pFirst,30);
	printf("Itm Found Last Position :%d\n",iLast);
	
	iAdd=Addition(pFirst);
	printf("Addition of Element :%d\n",iAdd);
	
	iMax=Maximum(pFirst);
	printf("Linked List Max Value :%d\n",iMax);
	
	iMin=Manimum(pFirst);
	printf("Linked List Manimum Value :%d\n",iMin);
	
	DisplayList(pFirst);
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
int SearchFirstOcc(PNODE pHead ,int iKey)
{
	int iPos=0;
	while(pHead != NULL)
	{
		iPos ++;
		if(iKey == pHead ->iData)
		{
			break;
		}
		pHead=pHead->pNext;
		
	}
	if(iKey == pHead ->iData)
			return iPos;
	else
		return -1;	
}
int SearchLastOcc(PNODE pHead ,int iKey)
{	
	int iPos=0;  
	int iCount=0;
	while(pHead != NULL )
	{
		iPos ++;
		if(pHead ->iData == iKey)
		{		
			iCount=iPos;
		}
		pHead=pHead->pNext;
	}
	return iCount;
	 
	
}
int CountNode(PNODE pHead)
{
	int iCount=0;
	while(pHead !=NULL)
	{
		iCount ++;
		pHead=pHead->pNext;
	}
	return iCount;
}
int Addition(PNODE pHead)
{
	int iAdd=0;
	while(pHead !=NULL)
	{
		iAdd=iAdd +(pHead ->iData);
		pHead=pHead->pNext;
	}
	return iAdd;
}
int Maximum(PNODE pHead)
{
	int iMax=0;
	while(pHead !=NULL)
	{
		if(iMax <= pHead ->iData)
			iMax =pHead->iData;
		pHead=pHead->pNext;
	}
	return iMax;
}
int Manimum(PNODE pHead)
{
	int iMin;
	while(pHead !=NULL )
	{
		if(iMin >= pHead ->iData )
			iMin =pHead->iData;
		pHead=pHead->pNext;
		
	}
	
		
	return iMin;
}
void DisplayList(PNODE pHead)
{	
	if(pHead == NULL)
	{
		printf("\nYour Linked List Is Empty");
		return;
	}
	while(pHead !=NULL)
	{
		printf("->|%d|",pHead->iData);
		pHead=pHead->pNext;
	}
}
