#include<stdio.h>
int Length(char *Str)
{
	static int iCnt=0;
	if(*Str !='\0')
	{	
		iCnt ++;          
		Length(Str + 1);   	//withRecurtion
	}
	return  iCnt;

	/*while(*Str !='\0')
	{
		iCnt ++;
		*Str ++;   Without Recurtion

	}
	return iCnt; */
}
int main()
{
	char Str[10];
	int iRet=0;
	printf("\n Enter a String :");
	scanf("%[^'\n']s",Str);
	iRet=Length(Str);
	printf("\n Lenth of String :%d",iRet);
	return 0;

}