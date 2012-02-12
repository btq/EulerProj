#include <iostream>
#include <math.h>
using namespace std;

/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int main(int argc, char** argv)
{
	int a,b,c;
	for (b=2; b<500; b++)
	{
		a=(1000*(500-b))/(1000-b);
		c = sqrt( (a*a) + (b*b) );
		cout << "a=" << a << " b=" << b << " c=" << c << " sum=" << a+b+c << endl;
		if ((1000-a-b-c) == 0)
		{
			cout << "Found a=" << a << " b=" << b << " c=" << c << endl;
			cout << "Answer is " << a*b*c << endl;
			return 0;
		}
	}
	return 0;
}	
