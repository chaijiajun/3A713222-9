#include <iostream>
#include <iomanip>
using namespace std ;

int main (int argc , char**argv)
{
	int a, b ;
	for (b=1; b<=9 ; b++ )
	{
		for(a=2;a<=9;a++)
		{
			cout << a <<'*';
			cout << b << '=' ;
			cout << setw(2) ;
			cout << a*b << '\t' ;
		}
		cout << endl ;
	}
	system ("PAUSE");
	return 0 ;
	
}
