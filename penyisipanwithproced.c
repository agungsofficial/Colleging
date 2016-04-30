#include <stdio.h>

void insortascproc(int tabint[10])
{
	int i, j, dasip;
	for (i = 0; i < 10; ++i)
	{
		dasip=tabint[i];
		j=i-1;
		while ( (dasip<tabint[j]) && (j>=0))
		{
			tabint[j+1]=tabint[j];
			j--;
		}
		tabint[j+1]=dasip;

	}
	printf("sorted:\n");
	for (i = 0; i < 10; ++i)
	{
		printf("%d\n",tabint[i] );
	}
}

int main(int argc, char const *argv[])
{
	int tabint [10];
	int i, j, dasip;


	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &tabint[i]);
	}


	insortascproc(tabint);
	return 0;
}