#include "search_algos.h"
/*
* print_arr - prints current array
* 
* @arr: input array
* @start: first element in the array
* @end: last element in the array
* Returns: array
*/

void print_arr(int *arr, size_t start, size_t end) { 
    printf("Searching in array: ");
    for (size_t i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return (-1);
    }

    size_t left = 0;
    size_t right = size - 1;

    while (left <= right)
    {
        size_t mid = (left + right) / 2;
        print_arr(array, left, right);

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1
        }
    }

    return (-1);
    
}