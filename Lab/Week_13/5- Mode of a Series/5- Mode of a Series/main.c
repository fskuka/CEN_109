#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *infile;
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);

	int n, m, i, num, maxMode, appear = 0;
	int modes[1001] = { 0 };

	fscanf(infile, "%d%d", &n, &m);


	for (i = 0; i < n; i++)
	{
		fscanf(infile, "%d", &num);
		modes[num]++;
	}

	for (i = 1; i <= m; i++)
	{
		//printf("%d. =%d\n ",i, modes[i]);
		if (modes[i] > appear)
		{
			appear = modes[i];
			maxMode = i;
		}
	}
	printf("%d", maxMode);

	fclose(infile);
	//getch();
	return 0;
}
