#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

//Work out the first ten digits of the sum
// of the following one-hundred 50-digit numbers.

int main(int argc, char** argv)
{
	int n;
	char nums[100][51]; // the text file way
	ifstream in;
	in.open("./src/EP013.txt");
	//in.getline(nums[1],51);
	//cout << nums[1] << endl;
	for (n=0; n<=99; n++)
	{
		//while (in.good())     // loop while extraction from file is possible
		//{
			in.get(nums[n],51);       // get character from file
		//	if (in.good())
		//		cout << nums[n] << endl;
		//}
		cout << n << endl;
		cout << nums[n] << endl;
		/*int i, prod, maxprod=0;
		for (i=0; i<=995; i++)
		{
			//display individual chars
			cout << nums[i] << " " << nums[i+1] << " " << nums[i+2] << " " << nums[i+3] << " " << nums[i+4] << " ";		
			//subtract 48 (because they are cast to ascii ints)
			prod = (nums[i]-48) * (nums[i+1]-48) * (nums[i+2]-48) * (nums[i+3]-48) * (nums[i+4]-48);
			cout << prod << endl;
			if (prod > maxprod)
				maxprod = prod;
		}*/
	}
	in.close();
	//cout << nums
	return 0;
	//cout << "The answer is " << maxprod << endl;
}
