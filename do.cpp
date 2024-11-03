#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main()
 {
    int n;

    // the number of elements in the list
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    if (n < 3)
     {
        cout << "Please enter at least 3 numbers." << endl;
        return 0;
     }

    // vector to store the list of numbers
    vector<int> numbers(n);

    // Input each number and store it in the vector
    cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> numbers[i];
    }

    // Sort list in descending order
    sort(numbers.begin(), numbers.end(), greater<int>());

    // Output the top three numbers 
    cout << "The three highest numbers are: " 
         << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << endl;

    return 0;
}
