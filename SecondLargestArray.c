#include <stdio.h>
#include <limits.h>   // For INT_MIN

int main()
{
    // Given array
    int arr[7] = {54, 5, 3, 7, 4, 64, 23};

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > largest) // Check if the current element is greater than largest
        {
            largest = arr[i]; // Update largest if the current element is greater than largest
        }
    }

        for (int i = 0; i < 7; i++)
    {
        if (arr[i] > secondLargest && arr[i] < largest) // Check if the current element is greater than secondLargest and less than largest
        {
            secondLargest = arr[i]; // Update secondLargest if the current element is greater than secondLargest and less than largest
        }
    }
    
    printf("Largest element = %d\n", largest);
    printf("Second Largest element = %d\n", secondLargest);

    return 0;
}