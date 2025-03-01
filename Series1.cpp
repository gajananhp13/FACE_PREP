
Write a program to generate the following series --- 1,4,9,16,25, ....

Input format:

The input containing an integer which denotes 'n'



Output format:

Print the series and refer the sample output for formatting



Sample Input:

7



Sample Output:

1 4 9 16 25 36 49 


__________________________________________________________
#include <iostream>
using namespace std;

int main() 
{
      int n;
  cin>>n;
	for(int i=1;i<=n;i++)
    {
     cout<<i*i<<" ";
    }
    return 0;
}
