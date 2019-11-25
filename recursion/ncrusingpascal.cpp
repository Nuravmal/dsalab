#include<iostream>
using namespace std;
int l[1001][1001]={0};
void initialize()
{

  l[0][0]=1;
  for(int i=1;i<1001;i++)
  {l[i][0]=1;
    for(int j=1;j<i+1;j++)
  {l[i][j]=l[i-1][j-1]+l[i-1][j];

  }}
}
int nCr(int n, int r)
{
    // Return nCr
    return l[n][r];
}
// Driver code
int main()
{
    // Build the Pascal's triangle
    initialize();
    int n = 8;
    int r = 3;
    cout << nCr(n, r);
}
