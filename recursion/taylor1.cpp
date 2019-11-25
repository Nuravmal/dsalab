#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

// Recursive Function with static
// variables p and f
double e(int x, int n)
{
	 double p = 1, f = 1;
	double r;

	// Termination condition
	if (n == 0)
		return 1;

	// Recursive call
	r = e(x, n - 1);
	// Update the power of x
	p = p * x;
	// Factorial
	f = f * n;
	return (r + p / f);
}

// Driver code
int main()
{
	int x = 4, n = 5;
cout<<e(x,n);

	return 0;
}
