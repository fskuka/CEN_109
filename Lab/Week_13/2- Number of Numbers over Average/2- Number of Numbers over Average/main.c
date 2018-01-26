#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *infile;
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);

	int i, n, number[100000], cnt = 0, sum = 0;
	double average;

	//Read number of numbers
	fscanf(infile, "%d", &n);
	for (i = 0;i<n;i++)
	{
		// Read the number and add to the sum
		fscanf(infile, "%d", &number[i]);
		sum += number[i];

	}
	// Calc. Average
	average = (double)sum / n;
	for (i = 0;i<n;i++)
	{
		// Check if the number is greater then average.
		if (number[i]>average)
			cnt++;
	}

	//Show result
	printf("%d", cnt);

	fclose(infile);
	return 0;
}