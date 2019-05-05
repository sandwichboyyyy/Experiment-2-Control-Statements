#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
  int i, n, factorial = 1;
  
  cout << "Enter a number: ";
  cin >> n;
		
	for (i=1;i<=n;++i)
  	{
 	factorial *= i;
	}
	cout << "The sum of all whole numbers from 1 to "<< n << " is "<< factorial;
	
	getch ();
	return 0;
	

 }
 
