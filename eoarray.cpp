#include <iostream>
using namespace std;

int main()
 {
    int n;
    cout << "Enter the number in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the in the array:\n";
    for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
     }

    int evenSum = 0, oddSum = 0;
     // Calculation the sum of even and odd numbers
    for (int i = 0; i < n; i++)
     {
        if (arr[i] % 2 == 0)
         {
            evenSum += arr[i];
         }
         else
        {
            oddSum += arr[i];
          }
    }
    //Output result
    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}
