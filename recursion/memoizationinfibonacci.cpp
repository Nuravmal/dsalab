#include<iostream>
using namespace std;
int term[1000]={0};
int fib(int n)
{
  if(n<=1)
  return n;

  if(term[n]!=0)
  return term[n];
  else
  {term[n]=fib(n-1)+fib(n-2);
  return term[n];
}}
int main()
{
  cout<<fib(6);
}
