#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int sum=0;
	int n;
	for ( n = 1; n < 1000; n++)
	{
		if ((n%3)==0 || (n%5)==0)
		{
			sum=sum+n;
		}
	}
	cout << sum << endl;
}
