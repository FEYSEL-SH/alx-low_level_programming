#include "main.h"
/**
 *The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
 *Returns a pointer to the memory area s
 *
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int counter;
	unsigned char *memory = s, value = c;

	for (counter = 0; counter < n; counter++)
		memory[counter] = value;

	return (memory);
}
