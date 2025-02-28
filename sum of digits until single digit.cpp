#include <iostream>  
using namespace std;  

// Function to find the sum of digits  
int sumOfDigits(int num) {  
    int sum = 0;  
    while (num > 0) {  
        sum += num % 10;  // Add last digit to sum  
        num /= 10;        // Remove the last digit  
    }  
    return sum;  
}  

// Function to reduce the number to a single digit  
int reduceToSingleDigit(int num) {  
    while (num >= 10) {  
        num = sumOfDigits(num);  // Sum the digits again  
    }  
    return num;  
}  

int main() {  
    int number;  

 
    cout << "Enter a number: ";  
    cin >> number;  

  
    int result = reduceToSingleDigit(number);  

 
    cout << result << endl;  

    return 0;  
}  
