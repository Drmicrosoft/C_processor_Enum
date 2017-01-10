#include <stdio.h>
#define LL 2
#define y = 1
#if defined (LL) && (LL == 0) 
	printf("1")
#elif  defined(LL) &&  (LL == 1)
	printf("2")
#elif defined  (LL) &&  (LL == 2)
	#define IS_DIGIT(x) ((x>=0) && (x<=9))? 1:0
	#define n 9
#elif  (LL) &&  (LL == 3)
	printf("4")
#endif




enum month {JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,DEC};
enum month rmonth=JAN;

#define PRINTD(x) printf(x)

int main () 
{
	printf("omar  =  %d ",IS_DIGIT(5));
	
	printf("omar  =  %d ",rmonth);
	PRINTD ("okasha");
	
	
	printf(" LL = %d " , LL);
	
	printf(" n = %d " , n);
	
	
	
	
}
