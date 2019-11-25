#include<iostream>
using namespace std
;
int power(int n,int x)
{
  if(n==0)
  return 0;
  if(x==0)
  return 1;
  return power(n,x-1)*n;
}
int main()
{
  cout<<power(2,5);
}
