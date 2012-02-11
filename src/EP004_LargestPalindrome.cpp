#include <iostream>
#include <array>
#include <math.h>

using namespace std;

int NextLowestPalindrome(int);

int main(int argc, char** argv)
{
	int ndigits = 3, n, maxval=0;

	for (n = ndigits-1; n >= 0; n--)
	{
		maxval = maxval + ceil((9 * pow(10,n))); //rounding errors require ceil
	}
	cout << maxval << endl;
	cout << maxval*maxval << endl;
	n = NextLowestPalindrome(maxval);
}

int NextLowestPalindrome(int n)
{
	int maxpow, powr;
	maxpow = floor(log10(n));
	std::array<int,6> digs;
	while (powr <= maxpow)
	{
		digs[powr] = floor(n/(pow(10,powr)));
		n = n - (digs[powr]*pow(10,powr));
		cout << digs[powr] << endl;
	}
}
