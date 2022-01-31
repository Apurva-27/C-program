/*
check nuber is divisible by 5 or not
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
	if((iNo % 5)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}	
}

int main()
{
	int iVal=0;
	BOOL bRet=FALSE;
	
	printf("\nEnter number:");
	scanf("%d",&iVal);
	
	bRet=Check(iVal);
	
	if(bRet==TRUE)
	{
		printf("\nDivisible by 5.");
	}
	else
	{
		printf("\nNot Divisible by 5.");
	}
	
	return 0;
}

/*

E:\Apurva\marevellous\new c>gcc num_divisible_by_five.c -o myexe

E:\Apurva\marevellous\new c>myexe

Enter number:9

Not Divisible by 5.
E:\Apurva\marevellous\new c>myexe

Enter number:15

Divisible by 5.
E:\Apurva\marevellous\new c>

*/