#include <stdio.h>
int WordCount(char *);
int main()
{
	char Str[30];
	int iRet=0;
	printf("\nEnter Your String :");
	scanf("%[^'\n']s",Str);
	iRet=WordCount(Str);
	printf("\n Total Word Count Is :%d",iRet);
	return 0;
}

int WordCount(char *Str)
{
	int iWord=1;
	if(Str == NULL)
	{
		return -1;
	}
	while(*Str !='\0')
	{
		if(*Str ==' ' || *Str=='\t')
		{
			iWord ++;
		}
		Str ++;
	}
	return iWord;
}
