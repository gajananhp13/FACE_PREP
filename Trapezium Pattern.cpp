Description

Write a program to print the trapezium pattern.
Sample Input 1:
4

Sample Output 1:

1*2*3*4*17*18*19*20
--5*6*7*14*15*16
----8*9*12*13
------10*11


Sample Input 2:
2
Sample Output 2:
1*2*5*6
--3*4


___________________________________________________________________________--
#include <iostream>  
using namespace std;  

int main() {  
    int n;  
    cin >> n;  
    int L = 1, R = n * n + 1;  

    for (int i = n; i > 0; i--) {  
        for (int j = n; j > i; j--)  
            cout << "--";  
        
        for (int k = i; k > 0; k--)  
            cout << L++ << "*";  
        
        for (int k = i; k > 1; k--)  
            cout << R++ << "*";  
        
        cout << R;  
        R = R - 2 * (i - 1);  
        cout << endl;  
    }  

    return 0;  
}  
