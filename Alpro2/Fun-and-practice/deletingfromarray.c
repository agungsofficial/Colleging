#include <stdio.h>

int main(int argc, char const *argv[])
{
	int erro=4, i; 		//Erro is location (within an array) that we want to delete
	int a[9];		//The array
	

	for (i = 0; i < 9; ++i)
	{
		a[i]=i;
	}
	for (i = erro; i < 9-1; ++i)
	{
		a[i]=a[i+1];
	}
	for (i = 0; i <9 ; ++i)
	{
		printf("%d %d\n",i, a[i] );
	}



	return 0;
}
