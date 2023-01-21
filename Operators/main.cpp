//Operators
#include <iostream>
using namespace std;
//#define ARINHMETICAL_OPERATORS
//#define ASSIGNMENT_OPERATORS
//#define INCREMENT_OPERATORS
#define DZ
void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Hello Operators" << endl;

#if defined ARINHMETICAL_OPERATORS
	* Unaty: +,-;
	* Binary: +,-,*,/,%:;
	%- остаток от деления;

	#endif
#if defined ASSIGNMENT_OPERATORS
	int a = 2;
	int b = 3;
	int c = a + b;

#endif

#if defined INCREMENT_OPERATORS
	int i = 0;
	++i
i++
#endif

#if defined DZ
int i = 3;
int i = i++ + ++i;
cout << i << endl;
#endif