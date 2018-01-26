#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *infile;
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		return 0;
	int i, j, n, m, points, sum = 0;
	int noCorAns;
	float avg;
	char corAns[41], stdAns[41], sp;
	fscanf(infile, "%d%d", &n, &m);

	for (i = 0; i<m; i++)
	{
		fscanf(infile, "%c%c", &sp, &corAns[i]);
	}
	for (i = 0; i<n; i++)
	{
		noCorAns = 0;
		for (j = 0; j<m; j++)
		{
			fscanf(infile, "%c%c", &sp, &stdAns[j]);
			if (stdAns[j] == corAns[j])
				noCorAns++;
		}
		points = (100 / m)*noCorAns;
		sum += points;
	}
	avg = (float)sum / n;
	printf("%.2f", avg);
	fclose(infile);
	//getch();
	return 0;
}