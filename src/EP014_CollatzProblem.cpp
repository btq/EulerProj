#include <iostream>
#include <stdio.h>
using namespace std;

/*The following iterative sequence is defined for the set of positive
 integers:

n = n/2 (n is even)
n = 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following
 sequence:
13 ? 40 ? 20 ? 10 ? 5 ? 16 ? 8 ? 4 ? 2 ? 1

It can be seen that this sequence (starting at 13 and finishing at
 1) contains 10 terms. Although it has not been proved yet (Collatz Problem),
 it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/
unsigned long Collatz(unsigned long);

int main(int argc, char** argv)
{
	int chain = 0, maxchain = 0;
	unsigned long n, i;
	for (unsigned long i = 1000000; i > 2; i--)
	{
		chain = 0;
		n=i;
		//cout << "original n = " << n << endl;
		while (n != 1)
		{
			n=Collatz(n);
		//	cout << n << endl;
			chain += 1;
		}
		if (chain > maxchain)
		{
			maxchain = chain;
			printf("New max chain of %i for %lu\n",maxchain,i);
		}
	}
}

unsigned long Collatz(unsigned long n)
{
	if ( (n & 1) == 0 )
		return (n/2);
	else
		return ((3*n)+1);
}