#include <bits/stdc++.h>
using namespace std;

// Function to find the second smallest and second largest elements in the array
void getElements(int arr[], int n)
{
    // Edge case: when the array has less than 2 elements
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl; // If only one element, print -1 for both second smallest and second largest

    // Initialize variables to track the smallest, second smallest, largest, and second largest elements
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;
    int i;

    // Find the smallest and largest elements in the array
    for (i = 0; i < n; i++)
    {
        small = min(small, arr[i]); // Update the smallest element
        large = max(large, arr[i]); // Update the largest element
    }

    // Find the second smallest and second largest elements
    for (i = 0; i < n; i++)
    {
        // If the current element is smaller than second_small and not equal to the smallest, update second_small
        if (arr[i] < second_small && arr[i] != small)
            second_small = arr[i];

        // If the current element is larger than second_large and not equal to the largest, update second_large
        if (arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }

    // Output the second smallest and second largest elements
    cout << "Second smallest is " << second_small << endl;
    cout << "Second largest is " << second_large << endl;
}

int main()
{
    // Initialize the array with elements
    int arr[] = {1, 2, 4, 6, 7, 5};

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the function to find and print the second smallest and second largest elements
    getElements(arr, n);

    return 0;
}