// Find the counts of elements of an unsorted integer array which are equal to the average of all elements of that array.

#include <stdio.h>
// time complexity : O(n)
// space complexity : O(1)
// findAverage of all elements of an unsorted integer array
int findAverage(int *array, int arr_size)
{
    int sum = 0;
    for (int i = 0; i < arr_size; i++)
    {
        sum += array[i];
    }
    return sum / arr_size;
}

int main(int argc, char **argv)
{
    int arr[] = {1, 3, 2, 4, 5};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int average = findAverage(arr, arr_size);
    int count = 0;
    // find a number of  element which is equal to the average
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] == average)
        {
            count++;
        }
    }
    printf("%d\n", average);
    printf("it contain %d element of %d\n", count, average);
    return 0;
}