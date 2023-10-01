#include "sort.h"

/**
*  * swap_values - Swap two integers in an array.
*   * @x: The first integer to swap.
*    * @y: The second integer to swap.
*     */
void swap_values(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}

/**
*  * bubble_sort - Sort an array of integers in ascending order using bubble sort.
*   * @arr: An array of integers to sort.
*    * @size: The size of the array.
*     *
*      * Description: Prints the array after each swap.
*       */
void bubble_sort(int *arr, size_t size)
{
size_t i, j, len = size;
bool sorted = false;

if (arr == NULL || size < 2)
return;

while (!sorted)
{
sorted = true;
for (i = 0; i < len - 1; i++)
{
if (arr[i] > arr[i + 1])
{
swap_values(&arr[i], &arr[i + 1]);
print_array(arr, size);
sorted = false;
}
}
len--;
}
}
