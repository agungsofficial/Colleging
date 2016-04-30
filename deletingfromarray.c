#include <stdio.h>

int main(int argc, char const *argv[])
{
	int erro=4, i;
	int a[9];
	

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
7
ya
124j421 EzBugatti
2000001 LienKing
0800322 Artizi
1520036 Yunifers
322322322 Ice3
4429222 Puppan
7732221 EternalEnpi
nim