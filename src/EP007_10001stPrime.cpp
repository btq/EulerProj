#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
we can see that the 6th prime is 13.

What is the 10001st prime number?
*/

bool IsPrime(double);

int main (int argc, char** argv)
{
	double arr[10001];
	double n=7;
	arr[0] = 2;
	arr[1] = 3;
	arr[2] = 5;

	int ind = 3;
	while (ind <= 10000)
	{
		if (IsPrime(n))
		{
			arr[ind] = n;
			ind=ind+1;
		}
		n=n+2;
	}
	printf("The 10,001st prime is %.0f\n", arr[10000]);
}

bool IsPrime(double n)
{
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
	cout << "Prime found = " << n << endl;
	return true;
}
