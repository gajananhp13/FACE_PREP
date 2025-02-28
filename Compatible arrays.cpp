Description

Two arrays are said to be compatible if they are of the same size and if the ith element in the first array is greater than or equal to the ith element in the second array for all the values of i. Write a program to find whether 2 arrays are compatible or not.



Input Format

Input consists of 2n+2 integers. The first integer corresponds to ‘n1’, the size of the first array. The next ‘n1’ integers correspond to the elements in the first array. The next (n+1) integer corresponds to 'n2', the size of the second array. The last 'n2' integers correspond to the elements in the second array.



Output Format

The output is any one of the two strings "Compatible" or "Incompatible"



Sample Input 0

5
2
3
6
8
1
5
1
1
1
1
1



Sample Output 0

Compatible
________________________________________________________________<Error Resolved all test cases passed>
#include <iostream>  
#include <vector>  

using namespace std;  

int main() {  
    int n1, n2;  

    // Read the size and elements of the first array  
    cin >> n1;  
    vector<int> array1(n1);  
    for (int i = 0; i < n1; ++i) {  
        cin >> array1[i];  
    }  

    // Read the size and elements of the second array  
    cin >> n2;  
    vector<int> array2(n2);  
    for (int i = 0; i < n2; ++i) {  
        cin >> array2[i];  
    }  

    // Check compatibility  
    if (n1 != n2) {  
        cout << "Incompatible" << endl;  
        return 0;  
    }  

    bool compatible = true;  
    for (int i = 0; i < n1; ++i) {  
        if (array1[i] < array2[i]) {  
            compatible = false;  
            break;  
        }  
    }  

    if (compatible) {  
        cout << "Compatible" << endl;  
    } else {  
        cout << "Incompatible" << endl;  
    }  

    return 0;  
}  
