#include "main.h"
const char *jandata = "Database/janin.csv";
const char *febdata = "Database/febin.csv";
const char *marchdata = "Database/marchin.csv";
const char *aprdata = "Database/aprin.csv";
const char *maydata = "Database/mayin.csv";
const char *junedata = "Database/junein.csv";
const char *julydata = "Database/julyin.csv";
const char *augdata = "Database/augin.csv";
const char *sepdata = "Database/sepin.csv";
const char *octdata = "Database/octin.csv";
const char *novdata = "Database/novin.csv";
const char *decdata = "Database/decin.csv";

const char *janexdata = "Database/janex.csv";
const char *febexdata = "Database/febex.csv";
const char *marchexdata = "Database/marchex.csv";
const char *aprexdata = "Database/aprex.csv";
const char *mayexdata = "Database/mayex.csv";
const char *juneexdata = "Database/juneex.csv";
const char *julyexdata = "Database/julyex.csv";
const char *augexdata = "Database/augex.csv";
const char *sepexdata = "Database/sepex.csv";
const char *octexdata = "Database/octex.csv";
const char *novexdata = "Database/novex.csv";
const char *decexdata = "Database/decex.csv";

void installdatabase(){
	jandatabase();
	febdatabase();
	marchdatabase();
	aprdatabase();
	maydatabase();
	junedatabase();
	julydatabase();
	augdatabase();
	sepdatabase();
	octdatabase();
	novdatabase();
	decdatabase();
	
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

void jandatabase () {
	if ( !isFileExist (jandata)) {
        fopen (jandata, "w");
    }
}

void febdatabase () {
	if ( !isFileExist (febdata)) {
        fopen (febdata, "w");
    }
}

void marchdatabase () {
	if ( !isFileExist (marchdata)) {
        fopen (marchdata, "w");
    }
}

void aprdatabase () {
	if ( !isFileExist (aprdata)) {
        fopen (aprdata, "w");
    }
}

void maydatabase () {
	if ( !isFileExist (maydata)) {
        fopen (maydata, "w");
    }
}

void junedatabase () {
	if ( !isFileExist (junedata)) {
        fopen (junedata, "w");
    }
}

void julydatabase () {
	if ( !isFileExist (julydata)) {
        fopen (julydata, "w");
    }
}

void augdatabase () {
	if ( !isFileExist (augdata)) {
        fopen (augdata, "w");
    }
}

void sepdatabase () {
	if ( !isFileExist (sepdata)) {
        fopen (sepdata, "w");
    }
}

void octdatabase () {
	if ( !isFileExist (octdata)) {
        fopen (octdata, "w");
    }
}

void novdatabase () {
	if ( !isFileExist (novdata)) {
        fopen (novdata, "w");
    }
}

void decdatabase () {
	if ( !isFileExist (decdata)) {
        fopen (decdata, "w");
    }
}

void jandatabaseRead () {
    FILE *fp;
    fp = fopen (jandata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totaljan = totaljan + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void janexdatabaseRead () {
    FILE *fp;
    fp = fopen (janexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totaljan = totaljan - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void febdatabaseRead () {
    FILE *fp;
    fp = fopen (febdata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totalfeb = totalfeb + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void febexdatabaseRead () {
    FILE *fp;
    fp = fopen (febexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totalfeb = totalfeb - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void marchdatabaseRead () {
    FILE *fp;
    fp = fopen (marchdata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totalmarch = totalmarch + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void marchexdatabaseRead () {
    FILE *fp;
    fp = fopen (marchexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totalmarch = totalmarch - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void aprdatabaseRead () {
    FILE *fp;
    fp = fopen (aprdata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totalapr = totalapr + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void aprexdatabaseRead () {
    FILE *fp;
    fp = fopen (aprexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totalapr = totalapr - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void maydatabaseRead () {
    FILE *fp;
    fp = fopen (maydata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totalmay = totalmay + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void mayexdatabaseRead () {
    FILE *fp;
    fp = fopen (aprexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totalmay = totalmay - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void junedatabaseRead () {
    FILE *fp;
    fp = fopen (junedata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totaljune = totaljune + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void juneexdatabaseRead () {
    FILE *fp;
    fp = fopen (juneexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totaljune = totaljune - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void julydatabaseRead () {
    FILE *fp;
    fp = fopen (julydata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totaljuly = totaljuly + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void julyexdatabaseRead () {
    FILE *fp;
    fp = fopen (julyexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totaljuly = totaljuly - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void augdatabaseRead () {
    FILE *fp;
    fp = fopen (augdata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totalaug = totalaug + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void augexdatabaseRead () {
    FILE *fp;
    fp = fopen (augexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totalaug = totalaug - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void sepdatabaseRead () {
    FILE *fp;
    fp = fopen (sepdata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totalsep = totalsep + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void sepexdatabaseRead () {
    FILE *fp;
    fp = fopen (sepexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totalsep = totalsep - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void octdatabaseRead () {
    FILE *fp;
    fp = fopen (octdata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totaloct = totaloct + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void octexdatabaseRead () {
    FILE *fp;
    fp = fopen (octexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totaloct = totaloct - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void novdatabaseRead () {
    FILE *fp;
    fp = fopen (novdata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totalnov = totalnov + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void novexdatabaseRead () {
    FILE *fp;
    fp = fopen (novexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totalnov = totalnov - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void novdatabaseRead () {
    FILE *fp;
    fp = fopen (novdata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totalnov = totalnov + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void novexdatabaseRead () {
    FILE *fp;
    fp = fopen (novexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totalnov = totalnov - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void decdatabaseRead () {
    FILE *fp;
    fp = fopen (decdata, "r");
    while ( fscanf (fp, "%d",income)  != EOF ) {
        totaldec = totaldec + income;
        totalmoney = totalmoney + income;
    }
    fclose (fp);
}

void decexdatabaseRead () {
    FILE *fp;
    fp = fopen (decexdata, "r");
    while ( fscanf (fp, "%d",expenses)  != EOF ) {
        totaldec = totaldec - expenses;
        totalmoney = totalmoney - expenses;
    }
    fclose (fp);
}

void jandatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (jandata, "a");
	printf("Enter your income");
 	scanf("%d", &income);
 	fprintf(fp,"%d",income);
    fclose (fp);
}

void jandatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (janexdata, "a");
	printf("Enter your expenses");
 	scanf("%d", &expeneses);
 	fprintf(fp,"%d",expenses);
    fclose (fp);
}

void febdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (febdata, "a");
	printf("Enter your income");
 	scanf("%d", &income);
 	fprintf(fp,"%d",income);
    fclose (fp);
}

void febdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (febexdata, "a");
	printf("Enter your expenses");
 	scanf("%d", &expeneses);
 	fprintf(fp,"%d",expenses);
    fclose (fp);
}

void marchdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (marchdata, "a");
	printf("Enter your income");
 	scanf("%d", &income);
 	fprintf(fp,"%d",income);
    fclose (fp);
}

void marchdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (marchxdata, "a");
	printf("Enter your expenses");
 	scanf("%d", &expeneses);
 	fprintf(fp,"%d",expenses);
    fclose (fp);
}

void aprdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (aprdata, "a");
	printf("Enter your income");
 	scanf("%d", &income);
 	fprintf(fp,"%d",income);
    fclose (fp);
}

void aprdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (aprexdata, "a");
	printf("Enter your expenses");
 	scanf("%d", &expeneses);
 	fprintf(fp,"%d",expenses);
    fclose (fp);
}

void maydatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (maydata, "a");
	printf("Enter your income");
 	scanf("%d", &income);
 	fprintf(fp,"%d",income);
    fclose (fp);
}

void maydatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (mayexdata, "a");
	printf("Enter your expenses");
 	scanf("%d", &expeneses);
 	fprintf(fp,"%d",expenses);
    fclose (fp);
}

void junedatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (junedata, "a");
	printf("Enter your income");
 	scanf("%d", &income);
 	fprintf(fp,"%d",income);
    fclose (fp);
}

void junedatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (juneexdata, "a");
	printf("Enter your expenses");
 	scanf("%d", &expeneses);
 	fprintf(fp,"%d",expenses);
    fclose (fp);
}

void julydatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (julydata, "a");
	printf("Enter your income");
 	scanf("%d", &income);
 	fprintf(fp,"%d",income);
    fclose (fp);
}

void julydatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (julyexdata, "a");
	printf("Enter your expenses");
 	scanf("%d", &expeneses);
 	fprintf(fp,"%d",expenses);
    fclose (fp);
}

void augdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (augdata, "a");
	printf("Enter your income");
 	scanf("%d", &income);
 	fprintf(fp,"%d",income);
    fclose (fp);
}

void augdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (augexdata, "a");
	printf("Enter your expenses");
 	scanf("%d", &expeneses);
 	fprintf(fp,"%d",expenses);
    fclose (fp);
}

void sepdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (sepdata, "a");
	printf("Enter your income");
 	scanf("%d", &income);
 	fprintf(fp,"%d",income);
    fclose (fp);
}

void sepdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (sepexdata, "a");
	printf("Enter your expenses");
 	scanf("%d", &expeneses);
 	fprintf(fp,"%d",expenses);
    fclose (fp);
}

void octdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (octdata, "a");
	printf("Enter your income");
 	scanf("%d", &income);
 	fprintf(fp,"%d",income);
    fclose (fp);
}

void octdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (octexdata, "a");
	printf("Enter your expenses");
 	scanf("%d", &expeneses);
 	fprintf(fp,"%d",expenses);
    fclose (fp);
}

void novdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (novdata, "a");
	printf("Enter your income");
 	scanf("%d", &income);
 	fprintf(fp,"%d",income);
    fclose (fp);
}

void novdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (novexdata, "a");
	printf("Enter your expenses");
 	scanf("%d", &expeneses);
 	fprintf(fp,"%d",expenses);
    fclose (fp);
}

void decdatabaseWriteIncome () {
    FILE *fp;
    fp = fopen (decdata, "a");
	printf("Enter your income");
 	scanf("%d", &income);
 	fprintf(fp,"%d",income);
    fclose (fp);
}

void decdatabaseWriteExpenses () {
    FILE *fp;
    fp = fopen (decexdata, "a");
	printf("Enter your expenses");
 	scanf("%d", &expeneses);
 	fprintf(fp,"%d",expenses);
    fclose (fp);
}