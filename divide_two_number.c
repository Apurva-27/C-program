# include<stdio.h>

int Divide(int iNo1, int iNo2)
{
	int iAns=0;
	
	if(iNo2>=iNo1)
	{
		return -1;
	}
	
	iAns = iNo1/iNo2;
	
	return iAns;
}

int main()
{
	int iVal1=15, iVal2=5;
	int iRet=0;
	
	iRet = Divide(iVal1,iVal2);
	
	printf("\nDivision is :%d",iRet);
	
	return 0;
}

/*

E:\Apurva\marevellous\new c>gcc divide_two.c -o myexe

E:\Apurva\marevellous\new c>myexe

Division is :3
E:\Apurva\marevellous\new c>

*/
