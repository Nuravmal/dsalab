#include<iostream>
using namespace std;
void toh(int n,char from,char to,char aux)
{
  if(n==1)
  {
    cout<<"move disk 1 from rod to "<<from<<"To rod"<<to<<endl ;
    return;
  }
  toh(n-1,from,aux,to);
  cout<<"move disk"<<n<<"from rod"<<from<<"to rod"<<to<<endl;
  toh(n-1,aux,to,from);

}
int main()
{
  int n=4;
  toh(n,'A','C','B');
}
