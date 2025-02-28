#include <iostream>  
#include <algorithm> // Include the algorithm header for sort  
using namespace std;  

int main()   
{  
    int n;  
    cin >> n;  
    int arr[n];  

  
    for (int i = 0; i < n; ++i) {  
        cin >> arr[i];   
    }  

  
    sort(arr, arr + n); // The correct way to sort a C-style array  

    // Output the sorted array  
  cout<<"The Sorted array is:"<<endl;
    for (int i=0;i<n;++i) {  
        cout << arr[i] <<endl; 
    
    return 0;  
}  
