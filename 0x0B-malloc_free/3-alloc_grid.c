#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **chaine, m, n;
	int l = width * height;

	if (l <= 0)
		return (NULL);

	chaine = (int **)malloc(sizeof(int *) * height);
	if (chaine == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		chaine[m] = (int *)malloc(sizeof(int) * width);
		if (chaine[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(chaine[m]);
			free(chaine);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
		for (n = 0; n < width; n++)
			chaine[m][n] = 0;

	return (chaine);
}
