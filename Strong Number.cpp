#include <iostream>  
using namespace std;  
int facto(int num)  
{  
    if(num == 0)  
        return 1;      
    return num * facto(num - 1);  
}  
int detectStrong(int num)  
{  
    int digit, sum = 0;  
    int temp = num;  

    // calculate factorial sum of digits  
    while(temp != 0)  
    {  
        digit = temp % 10;  
        sum = sum + facto(digit);  
        temp /= 10;  
    }  

    // returns 1 if both equal else 0  
    return sum == num;  
}  

int main()  
{  
    int num;
  cin>>num;

    if(detectStrong(num))  
        cout << "Yes"; // Fixed output operator  
    else  
        cout << "No";  

    return 0; // Added return statement  
}  
