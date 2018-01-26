#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *infile;
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);

	int i, n, a, b, sum = 0, number[10001];
	fscanf(infile, "%d%d%d", &n, &a, &b);

	for (i = 1; i <= n; i++)
	{
		fscanf(infile, "%d", &number[i]);
	}

	for (i = a; i <= b; i++)
	{
		sum += number[i];
	}

	printf("%d\n", sum);

	for (i = a; i <= b; i++)
	{
		printf("%d ", number[i]);
	}

	fclose(infile);
	return 0;
}