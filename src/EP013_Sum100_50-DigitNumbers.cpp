#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <stdlib.h>
using namespace std;

//Work out the first ten digits of the sum
// of the following one-hundred 50-digit numbers.

void StrAdd(string *, string *);
string convertInt(int);

int main(int argc, char** argv)
{
	int n=0;
	string strlist[100];
	string str;
	string strTotal;
	char *cptr;
	char nums[100][51]; // the text file way
	cptr = &nums[0][0];
	ifstream in;
	in.open("./files/EP013.txt");
		while (in.good() && n<=99)  // loop while extraction from file is possible
		{
			getline (in,str);
			strlist[n] = str;
			cout << n << endl;
			cout << strlist[n] << endl;
			if (n == 0)
				strTotal = str;
			if (n > 0)
			{
				cout << "String size in " << strTotal.size() << endl;
				StrAdd(&strTotal, &str);
				cout << "String size out " << strTotal.size() << endl;
			}
			n++;
		}
		in.close();
	return 0;
}

void StrAdd(string* str1, string* str2)
{
	int i1, i2, Tsum, carry=0;
	string strTsum, strHold;
	strHold=*str1;
	for (int i = 0; i < str2->size(); i++)
	{
		i1 = str1->size()-1-i; i2 = str2->size()-i-1;
		Tsum = (str1->at(i1)-48) + (str2->at(i2)-48) + carry;
		strTsum = convertInt(Tsum);
		str1->at(i1)=strTsum.at(strTsum.size()-1);
		if (strTsum.size() > 1)
		{
			carry = (strTsum[0]-48);
		}
		else
			carry = 0;
	}
	strTsum.clear();
	while (carry == 1)
	{
		if (i1 == 0)
		{
			str1->insert(0,"1");
			carry = 0;
		}
		else if (str1->compare(i1-1,1,"9") == 0) {
			str1->replace(i1-1,1,"0");
			i1=i1-1;
			cout << "i1 = " << i1 << endl;
			carry = 1;
		}
		else
		{
			Tsum = (str1->at(i1-1)-48) + carry;
			strTsum = convertInt(Tsum);
			str1->at(i1-1)=strTsum.at(strTsum.size()-1);
			cout << "str1->at(i1-1)= " << str1->at((i1-1)) << "  Tsum = " << Tsum << endl;
			carry = 0;
		}
	}
}	

string convertInt(int number)
{
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}
