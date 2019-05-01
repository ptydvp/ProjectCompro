void firstpage();
const char *jandata = "Database/janincome.txt";
const char *febdata = "Database/febincome.txt";
const char *marchdata = "Database/marchincome.txt";
const char *aprdata = "Database/aprincome.txt";
const char *maydata = "Database/mayincome.txt";
const char *junedata = "Database/juneincome.txt";
const char *julydata = "Database/julyincome.txt";
const char *augdata = "Database/augincome.txt";
const char *sepdata = "Database/sepincome.txt";
const char *octdata = "Database/octincome.txt";
const char *novdata = "Database/novincome.txt";
const char *decdata = "Database/decincome.txt";

const char *janexdata = "Database/janexpenses.txt";
const char *febexdata = "Database/febexpenses.txt";
const char *marchexdata = "Database/marchexpenses.txt";
const char *aprexdata = "Database/aprexpenses.txt";
const char *mayexdata = "Database/mayexpenses.txt";
const char *juneexdata = "Database/juneexpenses.txt";
const char *julyexdata = "Database/julyexpenses.txt";
const char *augexdata = "Database/augexpenses.txt";
const char *sepexdata = "Database/sepexpenses.txt";
const char *octexdata = "Database/octexpenses.txt";
const char *novexdata = "Database/novexpenses.txt";
const char *decexdata = "Database/decexpenses.txt";

void jandatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/janincome.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &income); 
        totalincome = totalincome + income;
        totaljan = totaljan + income;
        totalmoney = totalmoney + income;
        income = 0;
    }
    fclose (fp);
}

void janexdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/janexpenses.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &expenses);
        totalexpenses = totalexpenses + expenses;
        totaljan = totaljan - expenses;
        totalmoney = totalmoney - expenses;
        expenses = 0;
    }
    fclose (fp);
}

void febdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/febincome.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &income); 
        totalincome = totalincome + income;
        totalfeb = totalfeb + income;
        totalmoney = totalmoney + income;
        income = 0;
    }
    fclose (fp);
}

void febexdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/febexpenses.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &expenses);
        totalexpenses = totalexpenses + expenses;
        totalfeb = totalfeb - expenses;
        totalmoney = totalmoney - expenses;
        expenses = 0;
    }
    fclose (fp);
}

void marchdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/marchincome.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &income); 
        totalincome = totalincome + income;
        totalmarch = totalmarch + income;
        totalmoney = totalmoney + income;
        income = 0;
    }
    fclose (fp);
}

void marchexdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/marchexpenses.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &expenses);
        totalexpenses = totalexpenses + expenses;
        totalmarch = totalmarch - expenses;
        totalmoney = totalmoney - expenses;
        expenses = 0;
    }
    fclose (fp);
}

void aprdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/aprincome.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &income); 
        totalincome = totalincome + income;
        totalapr = totalapr + income;
        totalmoney = totalmoney + income;
        income = 0;
    }
    fclose (fp);
}

void aprexdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/aprexpenses.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &expenses);
        totalexpenses = totalexpenses + expenses;
        totalapr = totalapr - expenses;
        totalmoney = totalmoney - expenses;
        expenses = 0;
    }
    fclose (fp);
}

void maydatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/mayincome.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &income); 
        totalincome = totalincome + income;
        totalmay = totalmay + income;
        totalmoney = totalmoney + income;
        income = 0;
    }
    fclose (fp);
}

void mayexdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/mayexpenses.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &expenses);
        totalexpenses = totalexpenses + expenses;
        totalmay = totalmay - expenses;
        totalmoney = totalmoney - expenses;
        expenses = 0;
    }
    fclose (fp);
}

void junedatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/juneincome.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &income); 
        totalincome = totalincome + income;
        totaljune = totaljune + income;
        totalmoney = totalmoney + income;
        income = 0;
    }
    fclose (fp);
}

void juneexdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/juneexpenses.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &expenses);
        totalexpenses = totalexpenses + expenses;
        totaljune = totaljune - expenses;
        totalmoney = totalmoney - expenses;
        expenses = 0;
    }
    fclose (fp);
}

void julydatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/julyincome.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &income); 
        totalincome = totalincome + income;
        totaljuly = totaljuly + income;
        totalmoney = totalmoney + income;
        income = 0;
    }
    fclose (fp);
}

void julyexdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/julyexpenses.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &expenses);
        totalexpenses = totalexpenses + expenses;
        totaljuly = totaljuly - expenses;
        totalmoney = totalmoney - expenses;
        expenses = 0;
    }
    fclose (fp);
}

void augdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/augincome.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &income); 
        totalincome = totalincome + income;
        totalaug = totalaug + income;
        totalmoney = totalmoney + income;
        income = 0;
    }
    fclose (fp);
}

void augexdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/augexpenses.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &expenses);
        totalexpenses = totalexpenses + expenses;
        totalaug = totalaug - expenses;
        totalmoney = totalmoney - expenses;
        expenses = 0;
    }
    fclose (fp);
}

void sepdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/sepincome.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &income); 
        totalincome = totalincome + income;
        totalsep = totalsep + income;
        totalmoney = totalmoney + income;
        income = 0;
    }
    fclose (fp);
}

void sepexdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/sepexpenses.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &expenses);
        totalexpenses = totalexpenses + expenses;
        totalsep = totalsep - expenses;
        totalmoney = totalmoney - expenses;
        expenses = 0;
    }
    fclose (fp);
}

void octdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/octincome.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &income); 
        totalincome = totalincome + income;
        totaloct = totaloct + income;
        totalmoney = totalmoney + income;
        income = 0;
    }
    fclose (fp);
}

void octexdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/octexpenses.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &expenses);
        totalexpenses = totalexpenses + expenses;
        totaloct = totaloct - expenses;
        totalmoney = totalmoney - expenses;
        expenses = 0;
    }
    fclose (fp);
}

void novdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/novincome.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &income); 
        totalincome = totalincome + income;
        totalnov = totalnov + income;
        totalmoney = totalmoney + income;
        income = 0;
    }
    fclose (fp);
}

void novexdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/novexpenses.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &expenses);
        totalexpenses = totalexpenses + expenses;
        totalnov = totalnov - expenses;
        totalmoney = totalmoney - expenses;
        expenses = 0;
    }
    fclose (fp);
}

void decdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/decincome.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &income); 
        totalincome = totalincome + income;
        totaldec = totaldec + income;
        totalmoney = totalmoney + income;
        income = 0;
    }
    fclose (fp);
}

void decexdatabaseRead () {
    FILE *fp;
    fp = fopen ("Database/decexpenses.txt", "r");
    while (!feof (fp)) {
        fscanf (fp, "%d", &expenses);
        totalexpenses = totalexpenses + expenses;
        totaldec = totaldec - expenses;
        totalmoney = totalmoney - expenses;
        expenses = 0;
    }
    fclose (fp);
}

void jandatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (jandata, "a");
	printf("Enter your income\n");
 	scanf("%d", &input);
 	totaljan = totaljan + input;
 	totalincome = totalincome + input;
 	totalmoney = totalmoney + input;
 	fprintf(fp,"%d\n", input);
    fclose (fp);
}

void jandatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (janexdata, "a");
	printf("Enter your expenses\n");
 	scanf("%d", &out);
 	totaljan = totaljan - out;
 	totalexpenses = totalexpenses + out;
 	totalmoney = totalmoney - out;
    fprintf(fp,"%d\n", out);
    fclose (fp);
}

void febdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (febdata, "a");
	printf("Enter your income\n");
 	scanf("%d", &input);
 	totalfeb = totalfeb + input;
 	totalincome = totalincome + input;
 	totalmoney = totalmoney + input;
    fprintf(fp,"%d\n", input);
    fclose (fp);
}

void febdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (febexdata, "a");
	printf("Enter your expenses\n");
 	scanf("%d", &out);
 	totalfeb = totalfeb - out;
 	totalexpenses = totalexpenses + out;
 	totalmoney = totalmoney - out;
    fprintf(fp,"%d\n", out);
    fclose (fp);
}

void marchdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (marchdata, "a");
	printf("Enter your income\n");
 	scanf("%d", &input);
 	totalmarch = totalmarch + input;
 	totalincome = totalincome + input;
 	totalmoney = totalmoney + input;
    fprintf(fp,"%d\n", input);
    fclose (fp);
}

void marchdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (marchexdata, "a");
	printf("Enter your expenses\n");
 	scanf("%d", &out);
 	totalmarch = totalmarch - out;
 	totalexpenses = totalexpenses + out;
 	totalmoney = totalmoney - out;
    fprintf(fp,"%d\n", out);
    fclose (fp);
}

void aprdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (aprdata, "a");
	printf("Enter your income\n");
 	scanf("%d", &input);
 	totalapr = totalapr + input;
 	totalincome = totalincome + input;
 	totalmoney = totalmoney + input;
    fprintf(fp,"%d\n", input);
    fclose (fp);
}

void aprdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (aprexdata, "a");
	printf("Enter your expenses\n");
 	scanf("%d", &out);
 	totalapr = totalapr - out;
 	totalexpenses = totalexpenses + out;
 	totalmoney = totalmoney - out;
    fprintf(fp,"%d\n", out);
    fclose (fp);
}

void maydatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (maydata, "a");
	printf("Enter your income\n");
 	scanf("%d", &input);
 	totalmay = totalmay + input;
 	totalincome = totalincome + input;
 	totalmoney = totalmoney + input;
    fprintf(fp,"%d\n", input);
    fclose (fp);
}

void maydatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (mayexdata, "a");
	printf("Enter your expenses\n");
 	scanf("%d", &out);
 	totalmay = totalmay - out;
 	totalexpenses = totalexpenses + out;
 	totalmoney = totalmoney - out;
    fprintf(fp,"%d\n", out);
    fclose (fp);
}

void junedatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (junedata, "a");
	printf("Enter your income\n");
 	scanf("%d", &input);
 	totaljune = totaljune + input;
 	totalincome = totalincome + input;
 	totalmoney = totalmoney + input;
    fprintf(fp,"%d\n", input);
    fclose (fp);
}

void junedatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (juneexdata, "a");
	printf("Enter your expenses\n");
 	scanf("%d", &out);
 	totaljune = totaljune - out;
 	totalexpenses = totalexpenses + out;
 	totalmoney = totalmoney - out;
    fprintf(fp,"%d\n", out);
    fclose (fp);
}

void julydatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (julydata, "a");
	printf("Enter your income\n");
 	scanf("%d", &input);
 	totaljuly = totaljuly + input;
 	totalincome = totalincome + input;
 	totalmoney = totalmoney + input;
    fprintf(fp,"%d\n", input);
    fclose (fp);
}

void julydatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (julyexdata, "a");
	printf("Enter your expenses\n");
 	scanf("%d", &out);
 	totaljuly = totaljuly - out;
 	totalexpenses = totalexpenses + out;
 	totalmoney = totalmoney - out;
    fprintf(fp,"%d\n", out);
    fclose (fp);
}

void augdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (augdata, "a");
	printf("Enter your income\n");
 	scanf("%d", &input);
 	totalaug = totalaug + input;
 	totalincome = totalincome + input;
 	totalmoney = totalmoney + input;
    fprintf(fp,"%d\n", input);
    fclose (fp);
}

void augdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (augexdata, "a");
	printf("Enter your expenses\n");
 	scanf("%d", &out);
 	totalaug = totalaug - out;
 	totalexpenses = totalexpenses + out;
 	totalmoney = totalmoney - out;
    fprintf(fp,"%d\n", out);
    fclose (fp);
}

void sepdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (sepdata, "a");
	printf("Enter your income\n");
 	scanf("%d", &input);
 	totalsep = totalsep + input;
 	totalincome = totalincome + input;
 	totalmoney = totalmoney + input;
    fprintf(fp,"%d\n", input);
    fclose (fp);
}

void sepdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (sepexdata, "a");
	printf("Enter your expenses\n");
 	scanf("%d", &out);
 	totalsep = totalsep - out;
 	totalexpenses = totalexpenses + out;
 	totalmoney = totalmoney - out;
    fprintf(fp,"%d\n", out);
    fclose (fp);
}

void octdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (octdata, "a");
	printf("Enter your income\n");
 	scanf("%d", &input);
 	totaloct = totaloct + input;
 	totalincome = totalincome + input;
 	totalmoney = totalmoney + input;
    fprintf(fp,"%d\n", input);
    fclose (fp);
}

void octdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (octexdata, "a");
	printf("Enter your expenses\n");
 	scanf("%d", &out);
 	totaloct = totaloct - out;
 	totalexpenses = totalexpenses + out;
 	totalmoney = totalmoney - out;
    fprintf(fp,"%d\n", out);
    fclose (fp);
}

void novdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (novdata, "a");
	printf("Enter your income\n");
 	scanf("%d", &input);
 	totalnov = totalnov + input;
 	totalincome = totalincome + input;
 	totalmoney = totalmoney + input;
    fprintf(fp,"%d\n", input);
    fclose (fp);
}

void novdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (novexdata, "a");
	printf("Enter your expenses\n");
 	scanf("%d", &out);
 	totalnov = totalnov - out;
 	totalexpenses = totalexpenses + out;
 	totalmoney = totalmoney - out;
    fprintf(fp,"%d\n", out);
    fclose (fp);
}

void decdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (decdata, "a");
	printf("Enter your income\n");
 	scanf("%d", &input);
 	totaldec = totaldec + input;
 	totalincome = totalincome + input;
 	totalmoney = totalmoney + input;
    fprintf(fp,"%d\n", input);
    fclose (fp);
}

void decdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (decexdata, "a");
	printf("Enter your expenses\n");
 	scanf("%d", &out);
 	totaldec = totaldec - out;
 	totalexpenses = totalexpenses + out;
 	totalmoney = totalmoney - out;
    fprintf(fp,"%d\n", out);
    fclose (fp);
}

void installdatabase(){

	jandatabaseRead();
	febdatabaseRead();
	marchdatabaseRead();
	aprdatabaseRead();
	maydatabaseRead();
	junedatabaseRead();
	julydatabaseRead();
	augdatabaseRead();
	sepdatabaseRead();
	octdatabaseRead();
	novdatabaseRead();
	decdatabaseRead();
	
	janexdatabaseRead();
	febexdatabaseRead();
	marchexdatabaseRead();
	aprexdatabaseRead();
	mayexdatabaseRead();
	juneexdatabaseRead();
	julyexdatabaseRead();
	augexdatabaseRead();
	sepexdatabaseRead();
	octexdatabaseRead();
	novexdatabaseRead();
	decexdatabaseRead();
}

void topic() {
    printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("::                                           >>> SELECT TOPICS <<<                                           ::\n");
    printf("::                                                1.) Income                                                 ::\n");
    printf("::                                                2.) Expenses                                               ::\n");
    printf("::                                    3.) Remainning Money This Month                                        ::\n");
    printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
}

void urfinance() {
printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("::                     ¦    ¦  ¦¦¦¦  ¦¦¦¦¦ ¦¦¦  ¦   ¦   ¦¦¦  ¦   ¦  ¦¦¦¦  ¦¦¦  ¦¦¦  ¦                        ::\n");
    printf("::                     ¦    ¦  ¦   ¦ ¦      ¦   ¦¦  ¦  ¦   ¦ ¦¦  ¦ ¦       ¦  ¦   ¦ ¦                        ::\n");
    printf("::                     ¦    ¦  ¦¦¦¦  ¦¦¦    ¦   ¦ ¦ ¦  ¦¦¦¦¦ ¦ ¦ ¦ ¦       ¦  ¦¦¦¦¦ ¦                        ::\n");
    printf("::                     ¦¦¦¦¦¦  ¦   ¦ ¦     ¦¦¦  ¦  ¦¦  ¦   ¦ ¦  ¦¦  ¦¦¦¦  ¦¦¦ ¦   ¦ ¦¦¦¦¦                    ::\n");
    printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
}

void endbar() {
    printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
}


void month() {
	int cmonth;
	int inout;
	scanf("%d", &cmonth);
	if (cmonth == 1)
	{
        topic();
		scanf("%d", &inout);
		if (inout == 1) {
			jandatabaseWriteIncome();
            firstpage();
		} else if (inout == 2) {
			jandatabaseWriteExpenses();
            firstpage();
		} else if (inout == 3) {
			printf("::                                The remaining balance in this month is %d                                   ::\n", totaljan);
            firstpage();
		}
		
	}
	else if (cmonth == 2)
	{
		topic();
		scanf("%d", &inout);
		if (inout == 1) {
			febdatabaseWriteIncome();
            firstpage();
		} else if (inout == 2) {
			febdatabaseWriteExpenses();
            firstpage();
		} else if (inout == 3) {
			printf("::                                The remaining balance in this month is %d                                   ::\n", totalfeb);
            firstpage();
		}
	}
	else if (cmonth == 3)
	{
		topic();
		scanf("%d", &inout);
		if (inout == 1) {
			marchdatabaseWriteIncome();
            firstpage();
		} else if (inout == 2) {
			marchdatabaseWriteExpenses();	
            firstpage();
		} else if (inout == 3) {
			printf("::                                The remaining balance in this month is %d                                   ::\n", totalmarch);
            firstpage();
		}	
	}
	else if (cmonth == 4)
	{
		topic();
		scanf("%d", &inout);
		if (inout == 1) {
			aprdatabaseWriteIncome ();
            firstpage();
		} else if (inout == 2) {
			aprdatabaseWriteExpenses ();	
            firstpage();
		} else if (inout == 3) {
			printf("::                                The remaining balance in this month is %d                                   ::\n", totalapr);
            firstpage();
        }
	}
	else if (cmonth == 5)
	{
		topic();
		scanf("%d", &inout);
		if (inout == 1) {
			maydatabaseWriteIncome ();
            firstpage();
		} else if (inout == 2) {
			maydatabaseWriteExpenses ();
            firstpage();
		} else if (inout == 3) {
			printf("::                                The remaining balance in this month is %d                                   ::\n", totalmay);
            firstpage();
        }
	}
	else if (cmonth == 6)
	{
		topic();
		scanf("%d", &inout);
		if (inout == 1) {
			junedatabaseWriteIncome ();
            firstpage();
		} else if (inout == 2) {
			junedatabaseWriteExpenses ();
            firstpage();
		} else if (inout == 3) {
			printf("::                                The remaining balance in this month is %d                                   ::\n", totaljune);
            firstpage();
        }
	}
	else if (cmonth == 7)
	{
		topic();
		scanf("%d", &inout);
		if (inout == 1) {
			julydatabaseWriteIncome ();
            firstpage();
		} else if (inout == 2) {
			julydatabaseWriteExpenses ();
            firstpage();
		} else if (inout == 3) {
			printf("::                                The remaining balance in this month is %d                                   ::\n", totaljuly);
            firstpage();
        }
	}
	else if (cmonth == 8)
	{
		topic();
		scanf("%d", &inout);
		if (inout == 1) {
			augdatabaseWriteIncome ();
            firstpage();
		} else if (inout == 2) {
			augdatabaseWriteExpenses ();
            firstpage();
		} else if (inout == 3) {
			printf("::                                The remaining balance in this month is %d                                   ::\n", totalaug);	
            firstpage();
        }
	}
	else if (cmonth == 9)
	{
		topic();
		scanf("%d", &inout);
		if (inout == 1) {
			sepdatabaseWriteIncome ();
            firstpage();
		} else if (inout == 2) {
			sepdatabaseWriteExpenses ();
            firstpage();
		} else if (inout == 3) {
			printf("::                                The remaining balance in this month is %d                                   ::\n", totalsep);
            firstpage();
        }
	}
	else if (cmonth == 10)
	{
		topic();
		scanf("%d", &inout);
		if (inout == 1) {
			octdatabaseWriteIncome ();
            firstpage();
		} else if (inout == 2) {
			octdatabaseWriteExpenses ();
            firstpage();
		} else if (inout == 3) {
			printf("::                                The remaining balance in this month is %d                                   ::\n", totaloct);
            firstpage();
        }
	}
	else if (cmonth == 11)
	{
		topic();
		scanf("%d", &inout);
		if (inout == 1) {
			novdatabaseWriteIncome ();
            firstpage();
		} else if (inout == 2) {
			novdatabaseWriteExpenses ();
            firstpage();
		} else if (inout == 3) {
			printf("::                                The remaining balance in this month is %d                                   ::\n", totalnov);
            firstpage();
        }
	}
	else if (cmonth == 12)
	{
		topic();
		scanf("%d", &inout);
		if (inout == 1) {
			decdatabaseWriteIncome ();
            firstpage();
		} else if (inout == 2) {
			decdatabaseWriteExpenses ();
            firstpage();
		} else if (inout == 3) {
			printf("::                                The remaining balance in this month is %d                                   ::\n", totaldec);
            firstpage();
        }
	}
	else if (cmonth > 12)
	{
		firstpage();
	}
}


void firstpage() {
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
		firstpage();
	}
	if (fchoice == 3) {
		endbar();
		printf("::                                       Total Income: %d  				                     ::\n",totalincome);
		endbar();
		firstpage();
	}
	if (fchoice == 4) {
		endbar();
		printf("::                                           Total Expenses: %d                                               ::\n",totalexpenses);
		endbar();
		firstpage();
	}
	if (fchoice == 5) {
		urfinance();
		printf("::			                         THANK YOU						     ::\n");
		endbar();
	}
}

