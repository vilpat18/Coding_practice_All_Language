/*2. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : A B C D
		 a b c d
		 A B C D
		 a b c d
*/
#include<stdio.h>
void Pattern(int ,int);
int main()
{
	int iRow=0,iCol=0;
	printf("Enter A Row and column  For pattern :");
	scanf("%d %d",&iRow,&iCol);
	Pattern(iRow,iCol);

	return 0;
}
void Pattern(int iRow,int iCol)
{
	int iCnt=0,iCnt1=0;
	if(iRow < 0 )
	{
		iRow=-iRow;
	}
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	for(iCnt =0 ;iCnt < iRow ; iCnt ++)   // loop start zero is evan
	{
		for(iCnt1 = 0 ; iCnt1 < iCol ; iCnt1 ++)
		{
			if(iCnt % 2 ==1)
				printf("%c \t",'a'+ iCnt1);
			else
				printf("%c \t",'A'+ iCnt1);
		}
		printf("\n");
	}
}