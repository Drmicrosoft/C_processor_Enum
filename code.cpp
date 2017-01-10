/***

Macros are error-prone because they rely on textual substitution and do not perform type-checking. For example, this macro:

#define square(a) a*a

works fine when used with an integer:

square(5) --> 5*5 --> 25

but does very strange things when used with expressions:

square(1+2) --> 1+2*1+2 --> 1+2+2 --> 5
square(x++) --> x++*x++ --> increments x twice

Putting parentheses around arguments helps but doesn't completely eliminate these problems.

When macros contain multiple statements, you can get in trouble with control-flow constructs:

#define swap(x,y) t=x; x=y; y=t;
if(x<y) swap(x,y); -->
if(x<y) t=x; x=y; y=t; --> if(x<y) { t=x; } x=y; y=t;

The usual strategy for fixing this is to put the statements inside a "do { ... } while(0)" loop.

If you have two structures that happen to contain a field with the same name but different semantics, the same macro might work on both, with strange results:

struct shirt {
    int numButtons;
};

struct webpage {
    int numButtons;
};

#define num_button_holes(shirt)  ((shirt).numButtons * 4)

struct webpage page;
page.numButtons = 2;
num_button_holes(page) -> 8

Finally, macros can be difficult to debug, producing weird syntax errors or runtime errors that you have to expand to understand (e.g. with gcc -E), because debuggers cannot step through macros, as in this example:

#define print(x, y)  printf(x y)  /* accidentally forgot comma 
print("foo %s", "bar") /* prints "foo %sbar" 

Inline functions and constants help to avoid many of these problems with macros, but aren't always applicable. Where macros are deliberately used to specify polymorphic behavior, unintentional polymorphism may be difficult to avoid. C++ has a number of features such as templates to help create complex polymorphic constructs in a typesafe way without the use of macros; see Stroustrup's The C++ Programming Language for details.
	
***/




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


#define square(a) a*a

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
	
	printf(" the value of square is %d \n ", square(1+2));
	
	
}
