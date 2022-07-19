/************************************************/
//
// Auther : Manali Kulkarni
// Date : 19/07/2022
// Subject : Problems on Numbers
//
/***********************************************/

/************* Imports *******************/
#include<stdio.h>

/*************** Helper Functions ************/

//Program to add 2 numbers
int add(int iNo1, int iNo2)
{
	int iRet = 0;
	iRet = iNo1 + iNo2;
	return iRet;
}

//Progeam to display class from percentage
void grade(float fPer)
{
	if(fPer >= 70.00)
	{
		printf("Distinction");
	}
	else if(fPer >= 60.00 && fPer < 70.00)
	{
		printf("First Class");
	}
	else if(fPer >= 50.00 && fPer < 60.00)
	{
		printf("Second Class");
	}
	else if(fPer >= 35.00 && fPer < 50.00)
	{
		printf("Pass Class");
	}
	else
	{
		printf("Fail");
	}
}

//Program to dispaly City Name using city code
void cityCode(int iCode)
{
	switch(iCode)
	{
		case 01: printf("Mumbai");
					break;
		case 02: printf("Pune");
				 	break;
		case 03: printf("Solapur");
					break;
		default: printf("Invalid Code");
					break;
	}
}

//WAP which accepts a number from user and dispaly it for 5 times
void displayNum(int iNo)
{
	int iCnt = 0;
	for(iCnt =0; iCnt < 5; iCnt++)
	{
		printf("%d\t",iNo);
	}
}

//Accept no. from user & check wethwer it is dividble by 5 and 3
void displayDiv(int iNo)
{
	if(iNo % 3==0 && iNo%5==0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}

/*************** Driver Function ************/
int main()
{
	/*int iNo1 = 0, iNo2 = 0, iRet = 0;
	printf("Enter Numbers to addition : ");
	scanf("%d%d",&iNo1,&iNo2);
	iRet = add(iNo1,iNo2);
	printf("Addition is : %d",iRet);*/
	
	/*float fPer = 0.0;
	printf("Enter Percentage : ");
	scanf("%f",&fPer);
	grade(fPer);*/
	
	/*int iCode;
	printf("Enter City Code : ");
	scanf("%d",&iCode);
	cityCode(iCode);*/
	
	int iNo;
	printf("Enter Number : ");
	scanf("%d",&iNo);
	//displayNum(iNo);
	displayDiv(iNo);
	
	return 0;
}
