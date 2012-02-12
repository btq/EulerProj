#include <iostream>
#include <math.h>
using namespace std;
/*
The sequence of triangle numbers is generated by adding
 the natural numbers. So the 7th triangle number 
 would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

     1: 1
     3: 1,3
     6: 1,2,3,6
    10: 1,2,5,10
    15: 1,3,5,15
    21: 1,3,7,21
    28: 1,2,4,7,14,28

We can see that 28 is the first triangle number to have over five divisors.
What is the value of the first triangle number to have
 over five hundred divisors?
*/
int NumberFactors(long);

int main(int argc, char** argv)
{
	long triNum;
	int n;
	for (n = 7; n < 20000; n++)
	{
		triNum = (n * (n - 1))/2;
		if (NumberFactors(triNum) > 501)
		{
			cout << "ANSWER = " << triNum << endl;
			return 0;
		}
	}
	cout << "Not found, searched up to " << triNum << endl;
	return 0;
}

int NumberFactors(long n)
{
	int k = 1, nfacts = 0;
	while (k < sqrt(n))   
	{
		if (fmod(n,k)==0)
			{
				nfacts = nfacts + 2;
			}
		k = k + 1;
	}
	if (fmod(n,sqrt(n)))
		nfacts = nfacts + 1;
	return nfacts;
}
