#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);  // Initialize a vector of size n with all elements set to 0

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j += i + 1)  // Increment j by i + 1 each time
        {
            arr[j] = (arr[j] == 0) ? 1 : 0;  // Toggle the value at arr[j]
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;  // Output each element of the array
    }

    return 0;
}
