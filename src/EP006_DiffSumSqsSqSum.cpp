#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
/*The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural
 numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred
 natural numbers and the square of the sum.
*/

// we could actually compute these, but i prefer the closed form solution to the summation
int main(int argc, char** argv)
{
	float sqsum100 = ((100*101)/2)*((100*101)/2);
	float sumsq100 = (2*pow(100,3) + 3*pow(100,2) + 100)/6;
	printf ("The Answer is %9.0f\n",sqsum100-sumsq100);
}

