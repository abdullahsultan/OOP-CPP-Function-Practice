#include<iostream>
using namespace std;
int yearly_savings(int years,int savings,int intrests,int total);
int main()
{
  int years,savings,intrests,total=0,x;
  cout<<"Enter number of years \n";
  cin>>years;
  x=yearly_savings(years,savings,intrests,total);
  cout<<"\n Total savings of "<<years<<" = "<<x<<endl;
}


int yearly_savings(int years,int savings,int intrests,int total)
{
  int x;
  cout<<"Enter intrests ";
  cin>>intrests;
  for(x=1;x<=years;x++)
  {
  cout<<"Enter savings of year "<<x<<endl;
  cin>>savings;
  total=savings+intrests+total;


  }
  return total;
}