program for calculating days 

_______________________________________________________________
#include <iostream>
using namespace std;
int main() 
{
  int y,m;
  cin>>y>>m;
  if(m==2)
  {
    if((y%4==0 && y%100!=0) || y%400==0)
     cout<<"29 Days";
    else
     cout<<"28 Days";
  }
  else if
  (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    cout<<"31 Days";
  else
  {
    cout<<"30 Days";
  }
    return 0;
}
