#include "main.h"

/**
 * *_realloc- reallocates a memory bloc using malloc and free
 * @ptr: void pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: NULL if fails or pointer if success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ns, *os = ptr;
	unsigned int i = 0;

	if (ptr == NULL)
		return (malloc(new_size));
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		else if (new_size == old_size)
			return (ptr);
		ns = malloc(new_size);
		if (ns == NULL)
			return (NULL);

		if (new_size > old_size)
		{
			for (i = 0; i < old_size; i++)
			{
				ns[i] = os[i];
			}
			free(ptr);
		}
		else if (new_size < old_size)
		{
			for (i = 0; new_size > i; i++)
				ns[i] = os[i];
			free(ptr);
		}
		return (ns);
	}
}
