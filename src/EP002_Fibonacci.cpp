#include <iostream>
#include <vector>
using namespace std;

void Fibonacci(vector<int> *, int);
void RemoveOdds(vector<int> *);

int main(int argc, char** argv)
{
	vector<int> fib(2);
	fib[0]=0;
	fib[1]=1;
	int lim;
	cout << "Please enter a limit for the fibonacci sequence" << endl;
	cin >> lim;
	cout << "On to fibonacci, vector size is " << fib.size() << endl;
	Fibonacci(&fib,lim);
	cout << "Back from fibonacci, vector size is " << fib.size() << endl;
	RemoveOdds(&fib);
	int sum=0, n=0;
	for (n=0; n<fib.size(); n++)
		sum=sum + fib[n];
	cout << "Sum of evens in fibonacci seq. up to " << lim << " is " << sum << endl;
	return 0;
}

void Fibonacci(vector<int> *v, int limit)
{
	if ( v->back() >= limit)
	{
		if (v->back() > limit)
			v->pop_back();
		cout << "All done" << endl;
	}
	else
	{
		v->push_back(1);
		v->at(v->size()-1) = v->at(v->size() - 3) + v->at(((int)v->size()) - 2);
		Fibonacci(v,limit);
	}
}

void RemoveOdds(vector<int> *v)
{
	int n=0;
	while (n < v->size())
	{
		if (v->at(n) & 1)
			v->erase(v->begin()+n);
		else
			n=n+1;
	}
}
