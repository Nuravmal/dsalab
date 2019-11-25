//recursion
#include<iostream>
using namespace std;
int fac(int n)
{
  if (n==0)
  return 1;
  else
  return n*fac(n-1);
}

int ncr(int n,int r)
{
  return fac(n)/(fac(r)*fac(n-r));
}

int main()
{
	int n = 5, r = 0;
	cout << ncr(n, r);
	return 0;
}
