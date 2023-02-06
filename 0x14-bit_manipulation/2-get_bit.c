 #include "main.h"
/**
 * get_bit - returns the value of a bit at a gven index
 * @n: unsigned long into search
 * @index: index to return
 * Return: the value of the bit  at index or -1 if error
 */
int get_bit(unsugned long into n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}
