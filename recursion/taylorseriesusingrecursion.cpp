#include<bits/stdc++.h>
using namespace std;
double e(double x, int n)
{
  static double p=1,f=1;
  double r;
  if(n==0)
  return 0;
  else
  r=e(x,n-1);
  f=f*n;
  p=p*x;
  return r+p/f;
}
int main()
{
  cout<<e(4,15);
}
