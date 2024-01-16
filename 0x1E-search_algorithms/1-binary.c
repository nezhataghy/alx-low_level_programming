#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm (recursive version)
 * @array: array of ints
 * @size: size of array
 * @value: int value we are looking for
 * Return: Index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
    size_t l, r;

    l = 0;
    r = size - 1;

    if (array == NULL)
        return (-1);

    return binary_search_recursive(array, l, r, value);
}

/**
 * binary_search_recursive - Recursive helper function for binary search
 * @array: array of ints
 * @l: left bound of the array
 * @r: right bound of the array
 * @value: int value we are looking for
 * Return: Index of the value if found, otherwise -1
 */
int binary_search_recursive(int *array, size_t l, size_t r, int value)
{
    size_t i, m;

    if (l <= r)
    {
        printf("Searching in array:");
        for (i = l; i <= r; i++)
        {
            if (i == l)
                printf(" %d", array[i]);
            else
                printf(", %d", array[i]);
        }
        printf("\n");

        m = (l + r) / 2;

        if (array[m] == value)
            return m;
        else if (array[m] < value)
            return binary_search_recursive(array, m + 1, r, value);
        else
            return binary_search_recursive(array, l, m - 1, value);
    }

    return -1;
}
