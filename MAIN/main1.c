#include "main.h"

int fchoice;

void month(){
	int cmonth;
	scanf("%d", &cmonth);
	if (cmonth == 1)
	{
		jandatabaseWriteIncome();
		jandatabaseWriteExpenses ();
	}
	else if (cmonth == 2)
	{
		febdatabaseWriteIncome ();
		febdatabaseWriteExpenses ();
	}
	else if (cmonth == 3)
	{
		marchdatabaseWriteIncome ();
		marchdatabaseWriteExpenses ();
	}
	else if (cmonth == 4)
	{
		aprdatabaseWriteIncome ();
		aprdatabaseWriteExpenses ();
	}
	else if (cmonth == 5)
	{
		maydatabaseWriteIncome ();
		maydatabaseWriteExpenses ();
	}
	else if (cmonth == 6)
	{
		junedatabaseWriteIncome ();
		junedatabaseWriteExpenses ();
	}
	else if (cmonth == 7)
	{
		julydatabaseWriteIncome ();
		julydatabaseWriteExpenses ();
	}
	else if (cmonth == 8)
	{
		augdatabaseWriteIncome ();
		augdatabaseWriteExpenses ();
	}
	else if (cmonth == 9)
	{
		sepdatabaseWriteIncome ();
		sepdatabaseWriteExpenses ();
	}
	else if (cmonth == 10)
	{
		octdatabaseWriteIncome ();
		octdatabaseWriteExpenses ();
	}
	else if (cmonth == 11)
	{
		novdatabaseWriteIncome ();
		novdatabaseWriteExpenses ();
	}
	else if (cmonth == 12)
	{
		decdatabaseWriteIncome ();
		decdatabaseWriteExpenses ();
	}
	else if (cmonth>12)
	{
		printf("Error\n");
	}

int main()
{
	installdatabase();
	printf("|>>> INCOME/OUTCOME PROGRAM <<<|\n");
	printf("|>>> SELECT TOPICS <<<|\n");
	printf("| 1.) SELECT MONTH \n" );
	printf("| 2.) REMAINING MONEY \n");
	printf("| 3.) TOTAL INCOME \n");
	printf("| 4.) TOTAL EXPENSES \n");
	printf("| 5.) EXIT PROGRAM \n");
	scanf("%d",&fchoice);
	if (fchoice == 1)
	{
		printf("|>>> Input your month number <<<|\n");
		printf("|>>> Number Only <<<|\n");
		printf("| 1.) January\n");
		printf("| 2.) February\n");
		printf("| 3.) March\n");
		printf("| 4.) April\n");
		printf("| 5.) May\n");
		printf("| 6.) June\n");
		printf("| 7.) July\n");
		printf("| 8.) August\n");
		printf("| 9.) September\n");
		printf("| 10.) October\n");
		printf("| 11.) November\n");
		printf("| 12.) December\n");
		month();
	}
	if (fchoice == 2){
		printf("Remaining Money: %d",totalmoney);
	}
	if (fchoice == 3){
		printf("Total Income: %d",totalincome);
	}
	if (fchoice == 4){
		printf("Total Expenses: %d",totalexpenses);
	}
	return 0;
}



}
