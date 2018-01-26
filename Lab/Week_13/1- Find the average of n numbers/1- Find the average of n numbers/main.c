#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *infile;
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);

	int n, i, sum = 0, average;
	int numbers[100];

	fscanf(infile, "%d", &n);
	for (i = 0; i<n; i++)
	{
		fscanf(infile, "%d", &numbers[i]);
		sum += numbers[i];
	}
	// Integer Average
	average = sum / n;
	printf("%d", average);
	fclose(infile);

	return 0;
}