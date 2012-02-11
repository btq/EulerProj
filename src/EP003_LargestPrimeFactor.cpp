#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// The prime factors of 13195 are 5, 7, 13 and 29.
//	What is the largest prime factor of the number 600851475143 ?

bool IsPrime(double);

int main(int argc, char** argv)
{
	double n = 600851475143;
	cout << "Finding highest prime factor of 600851475143" << endl;
	vector<double> v;

	// handle n less than 2
	if (n < 2) { return 0;}
	
	if (fmod(n,2)==0) //if even add 2 and 2's complement;
		{
			v.push_back(2);
			v.push_back(n/2);
		}
	
	// Odd factors, primes >2 are odd, get factors and complements up to sqrt(n)
	int k = 3;
	while (k <= sqrt(n))   
	{
		if (fmod(n,k)==0)
			{
				v.push_back(k);
				v.push_back(n/k);
			}
		k = k + 2;
	}
	
	// Now check for primes
	vector<double> p;
	for ( k=0; k < v.size(); k++)
		{if (IsPrime(v[k])) p.push_back(v[k]); } //(length(p)+1)=v(f); end
	cout << "Highest prime is " << p.back() << endl;
}

bool IsPrime(double n)
{
	// if even, not prime
	if (fmod(n,2)==0)
		return false;
	
	// check for factors up to sqrt(n)
	int k=3;
	while (k < floor(sqrt(n)))
    {
	if (fmod(n,k) == 0) 
		return false;
    k=k+2;
	}
	
	// if we haven't returned by now, it's a prime
	cout << "Prime found = " << n << endl;
	return true;
}
