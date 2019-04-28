#include "main.h"

int fchoice;
int cmonth;
int remainmon;
int main()
{
	printf("|>>> INCOME/OUTCOME PROGRAM <<<|\n");
	printf("|>>> SELECT TOPICS <<<|\n");
	printf("| 1.) SELECT MONTH \n", );
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
		printf("Remaining Money: %d",allmoney)
	}
	if (fchoice == 3){
		printf("Total Income: %d",allincome)
	}
	if (fchoice == 5){
		printf("Total Expenses: %d",allexpenses)
	}
	return 0;
}

int month(){
	scanf("%d",&cmonth);
	switch(cmonth) {
		case '1': 
			jandatabaseWriteIncome();
			jandatabaseWriteExpenses ();
		case '2': 
			febdatabaseWriteIncome ();
			febdatabaseWriteExpenses ();
		case '3': 
			marchdatabaseWriteIncome ();
			marchdatabaseWriteExpenses ();
		case '4': 
			aprdatabaseWriteIncome ();
			aprdatabaseWriteExpenses ();
		case '5': 
			maydatabaseWriteIncome ();
			maydatabaseWriteExpenses ();
		case '6': 
			junedatabaseWriteIncome ();
			junedatabaseWriteExpenses ();
		case '7': 
			julydatabaseWriteIncome ();
			julydatabaseWriteExpenses ();
		case '8': 
			augdatabaseWriteIncome ();
			augdatabaseWriteExpenses ();
		case '9': 
			sepdatabaseWriteIncome ();
			sepdatabaseWriteExpenses ();
		case '10': 
			octdatabaseWriteIncome ();
			octdatabaseWriteExpenses ();
		case '11': 
			novdatabaseWriteIncome ();
			novdatabaseWriteExpenses ();
		case '12': 
			decdatabaseWriteIncome ();
			decdatabaseWriteExpenses ();
	}

}
