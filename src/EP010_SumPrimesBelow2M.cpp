#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.

bool IsPrime(double);

int main(int argc, char** argv)
{
	double sump = 2;
	double n = 3;
	while (n < 2000000)
	{
		if (IsPrime(n))
			sump = sump + n;
		n = n + 2;
	}
	cout << sump << endl;
	printf("The sum of primes up to 2,000,000 is %12.0f\n", sump);
	return 0;
}

bool IsPrime(double n)
{
	// 2 - special case
	if (n == 2)
		return true;
		
	// if even, not prime
	if (fmod(n,2)==0)
		return false;
	
	// check for factors up to sqrt(n)
	int k=3;
	while (k <= floor(sqrt(n)))
    {
	if (fmod(n,k) == 0) 
		return false;
    k=k+2;
	}
	
	// if we haven't returned by now, it's a prime
	//cout << "Prime found = " << n << endl;
	return true;
}
	