#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>

//-------------------------------------------------------------------------------------------------------
// varible
//-------------------------------------------------------------------------------------------------------
int income, input;
int expenses, out;
int fchoice;
int totalmoney, totalincome, totalexpenses;
int totaljan, totalfeb, totalmarch, totalapr, totalmay, totaljune, totaljuly, totalaug, totalsep, totaloct, totalnov, totaldec;
#include "database.c"
//-------------------------------------------------------------------------------------------------------
// 
//-------------------------------------------------------------------------------------------------------
/*Declare Database*/
void jandatabase();
void febdatabase();
void marchdatabase();
void aprdatabase();
void maydatabase();
void junedatabase();
void julydatabase();
void augdatabase();
void sepdatabase();
void octdatabase();
void novdatabase();
void decdatabase();
	
void jandatabaseRead();
void febdatabaseRead();
void marchdatabaseRead();
void aprdatabaseRead();
void maydatabaseRead();
void junedatabaseRead();
void julydatabaseRead();
void augdatabaseRead();
void sepdatabaseRead();
void octdatabaseRead();
void novdatabaseRead();
void decdatabaseRead();
	
void janexdatabaseRead();
void febexdatabaseRead();
void marchexdatabaseRead();
void aprexdatabaseRead();
void mayexdatabaseRead();
void juneexdatabaseRead();
void julyexdatabaseRead();
void augexdatabaseRead();
void sepexdatabaseRead();
void octexdatabaseRead();
void novexdatabaseRead();
void decexdatabaseRead();

/*Income Express to Database*/
void jandatabaseWriteIncome ();
void jandatabaseWriteExpenses ();
void febdatabaseWriteIncome ();
void febdatabaseWriteExpenses ();
void marchdatabaseWriteIncome ();
void marchdatabaseWriteExpenses ();
void aprdatabaseWriteIncome ();
void aprdatabaseWriteExpenses ();
void maydatabaseWriteIncome ();
void maydatabaseWriteExpenses ();
void junedatabaseWriteIncome ();
void junedatabaseWriteExpenses ();
void julydatabaseWriteIncome ();
void julydatabaseWriteExpenses ();
void augdatabaseWriteIncome ();
void augdatabaseWriteExpenses ();
void sepdatabaseWriteIncome ();
void sepdatabaseWriteExpenses ();
void octdatabaseWriteIncome ();
void octdatabaseWriteExpenses ();
void novdatabaseWriteIncome ();
void novdatabaseWriteExpenses ();
void decdatabaseWriteIncome ();
void decdatabaseWriteExpenses ();

// function month
void month();

/* text */
void topic();
void urfinance();
void endbar();
