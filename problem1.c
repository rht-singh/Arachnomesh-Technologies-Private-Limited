#include <stdio.h>

// Find the average of largest and smallest numbers in an unsorted integer array?
// time complexity: O(n)
// space complexity: O(1)

int getMinValue(int *array, int arr_size)
{
    int min = array[0];
    for (int i = 1; i < arr_size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int getMaxValue(int *array, int arr_size)
{
    int max = array[0];
    for (int i = 1; i < arr_size; i++)
    {

        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int main(int argc, char **argv)
{
    int arr[] = {1, 4, 3, 2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int min, max = -1;
    // find min element from an array
    min = getMinValue(arr, arr_size);
    // find max element from an array
    max = getMaxValue(arr, arr_size);
    int countmin, countmax = 0;
    // find duplicates of smallest and largest element
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] == min)
        {
            countmin++;
        }
        if (arr[i] == max)
        {
            countmax++;
        }
    }
    // find an average it's compiler dependent
    float average = countmin * min + countmax * max / (countmin + countmax);
    printf("%f\n", average);

    return 0;
}