#include <stdio.h>

#define IS_DIGIT(x) ((x>=0) && (x<=9))? 1:0

enum month {JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,DEC};
enum month rmonth=JAN;


int main () 
{
	printf("omar  =  %d ",IS_DIGIT(5));
	
	printf("omar  =  %d ",rmonth);
	
	
}
