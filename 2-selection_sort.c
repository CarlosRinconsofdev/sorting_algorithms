#include "sort.h"

/**
 * selection_sort - unction that sorts an array of integers in ascending order
 * @array: doubly pointer
 * @size: Length of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
int aux = 0;
size_t i = 0, j = 0, posit = 0;
if (array == NULL || size == 0)
return;
for (; i < size - 1; i++)
{
posit = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[posit])
posit = j;
}
if (posit != i)
{
aux = array[i];
array[i] = array[posit];
array[posit] = aux;
print_array(array, size);
}
}
}
