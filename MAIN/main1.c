#include "main.h"

int main() {
	installdatabase();
	urfinance();
	printf("::                                   >>> INCOME/OUTCOME PROGRAM <<<                                          ::\n");
    printf("::                                        >>> SELECT TOPICS <<<                                              ::\n");
	printf("::                                          1.) SELECT MONTH                                                 ::\n");
	printf("::                                          2.) REMAINING MONEY                                              ::\n");
	printf("::                                          3.) TOTAL INCOME                                                 ::\n");
	printf("::                                          4.) TOTAL EXPENSES                                               ::\n");
	printf("::                                          5.) EXIT PROGRAM                                                 ::\n");
	endbar();
	scanf("%d",&fchoice);
	if (fchoice == 1)
	{
		urfinance();
    	printf("::                                 >>> Input your month number <<<                                           ::\n");
		printf("::                                      >>> Number Only <<<                                                  ::\n");
		printf("::                                          1.) January                                                      ::\n");
		printf("::                                          2.) February                                                     ::\n");
		printf("::                                          3.) March                                                        ::\n");
		printf("::                                          4.) April                                                        ::\n");
  		printf("::                                          5.) May                                                          ::\n");
		printf("::                                          6.) June                                                         ::\n");
		printf("::                                          7.) July                                                         ::\n");
		printf("::                                          8.) August                                                       ::\n");
		printf("::                                          9.) September                                                    ::\n");
		printf("::                                          10.) October                                                     ::\n");
		printf("::                                          11.) November                                                    ::\n");
		printf("::                                          12.) December                                                    ::\n");
 	    endbar();
		month();
	}
	if (fchoice == 2) {
		endbar();
		printf("::                                          Remaining Money: %d                                               ::\n",totalmoney);
		endbar();
	}
	if (fchoice == 3) {
		endbar();
		printf("::                                       Total Income: %d  				                     ::\n",totalincome);
		endbar();
	}
	if (fchoice == 4) {
		endbar();
		printf("::                                           Total Expenses: %d                                               ::\n",totalexpenses);
		endbar();
	}
	if (fchoice == 5) {
		urfinance();
		printf("::			                         THANK YOU						     ::\n");
		endbar();
	}
	return 0;
}
