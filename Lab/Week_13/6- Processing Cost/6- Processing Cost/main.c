#include <stdio.h>

int main()
{
	FILE *infile;
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		return (0);
	int n, m, i, j, elm, maxElm, minProCos;
	int elmList[20000], procCost[20000] = { 0 };
	fscanf(infile, "%d%d", &n, &m);

	for (i = 0; i < n; i++)
	{

		maxElm = -20000;
		for (j = 0; j < m; j++)
		{
			fscanf(infile, "%d", &elmList[j]);
			if (elmList[j] > maxElm)
				maxElm = elmList[j];
		}
		for (j = 0; j < m; j++)
		{
			procCost[i] += maxElm - elmList[j];
		}

	}
	minProCos = procCost[0];

	for (i = 1;i<n;i++)
	{
		if (procCost[i]<minProCos)
			minProCos = procCost[i];
	}

	printf("%d", minProCos);

	fclose(infile);
	//getch();
	return 0;
}
