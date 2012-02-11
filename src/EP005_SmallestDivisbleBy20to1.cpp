#include <iostream>
#include <math.h>
using namespace std;

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

int main(int argc, char** argv)
{
	int i,j;
	for (i = 20; i < 900000000; i += 20)
	{
		j=19;
		while (((i % j) == 0) && (j > 1))
		{
			j -= 1;
			if (j==11) cout << " 11 Reached for " << i << endl;
			if (j==7) cout << " 7 Reached for " << i << endl;
		}
		if (j == 1)
		{
			cout << "Answer is " << i << endl;
			return 0;
		}
	}
	cout << "not found up to " << i << endl;
	return 1;
}