Description

In the kingdom of Terebinthia, Leslie Burke is so much interested in gardening and hence she plants more trees in her garden. She plants trees in a rectangular fashion with the order of rows and columns and numbers the trees in a row-wise order. She planted the mango trees only in the 1st row, 1st column, and last column. So, given the tree number, your task is to find out whether the given tree is a mango tree or not. Now, write a program to check whether the given number denotes a mango tree or not.



Input Format

Input consists of 3 integers. The first input denotes the number of rows. The second input denotes the number of columns. The third input denotes the tree number.



Output Format

If the given number is a mango tree, print "Yes". Otherwise, print "No"



Sample Input 1

5

5

11



Sample Output 1

Yes

// ___________________________________________________________________
#include <iostream>
using namespace std;

int main() 
{
// Try out your code here
  int row,col,tree;
  cin>>row>>col>>tree;
  
  //we know tree in the first row can all have mango tree 
// the last column and first colum also have mango trees
  if(tree>=1 || tree<=col || tree%col==0 || tree%col==1)
  {
    cout<<"Yes";
  }
  else
  cout<<"No";
    return 0; 
}
