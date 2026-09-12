#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5, 6, 7, 2, 1};

    int i = 0;
    int j = arr.size() - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "Reversed Array:";

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}

// Reverse an array by m position

void reverseArray(vector<int> &arr, int m)
{
    // Write your code here
    int s = m + 1;
    int e = arr.size() - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}