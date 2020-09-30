import java.lang.*;
import java.util.*;
class Demo
{
	public static void main(String arg[])
	{
		strings Dobj=new strings();
		Scanner Sobj=new Scanner(System.in);
		String str="";
		System.out.print("Enter a String :");
		str = Sobj.nextLine();
		int iRet=Dobj.CountCapital(str);
		System.out.println("Total Count of Capital Later :"+iRet);

	}
}
class strings
{
	int CountCapital(String str)
	{
		int iCount=0,iCnt=0;
		for(iCnt =0 ;iCnt < str.length();iCnt ++)
		{
			if(str.charAt(iCnt) >= 'A' && str.charAt(iCnt) <= 'Z')
			{	
				 iCount ++;
			}
		}
		return iCount;
	}
}
/*class strings
{
	int CountCapital(char[] str)
	{
		int iCount=0,iCnt=0;
		for(iCnt =0 ;iCnt < str.length;iCnt ++)
		{
			if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
			{	
				 iCount ++;
			}
			iCnt ++;
		}
		return iCount;
	}
} */