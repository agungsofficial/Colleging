#include "stark.h"		//The Header Included

//I CONVERT THE BINARY TO DECIMAL
	int binary_decimal(int n)
	{
	    int decimal=0, i=0, rem;
	    while (n!=0)
	    {
	        rem = n%10;
	        n/=10;
	        decimal += rem*pow(2,i);
	        ++i;
	    }
	    return decimal;
	}

//I SCAN THE SUSPICIOUS DATA
int susscan( int t, int m, int p, puck tobi[], puck moni[], puck piyu[], puck mark[])		//I inserted lots of argument here
{
	int i, j, k;		//The Comparative index
	int pas=0;		//An integer that we like to pass to another procedure/function
	for (i = 0; i < t; ++i)		//1st Level of loop
	{
		for (j = 0; j < m; ++j)		//2nd Level of loop
		{
			for (k = 0; k < p; ++k)		//3rd Level of loop  -  Yes, it's THREE LEVEL LOOPING!!!!
			{
				if (strcmp(tobi[i].binary, moni[j].binary)==0 && strcmp(moni[j].binary, piyu[k].binary)==0 && strcmp(tobi[i].binary, piyu[k].binary)==0)		//If the program found the similarities in data of each nations
				{
					mark[pas]=tobi[i];		//Mark the data
					pas++;		//Iterate the pas variable
				}
			}
		}
	}
	return pas;		//Return the pas value to determine the length of suspicious list
}

//II MERGING TWO TABLES
void sortmerg( int n1, int n2, puck inp1[], puck inp2[], puck mergres[])
{
	int i;		//Comparative index
	int co=0, un=0, nt=0;		//First, Second and Third Counter

	while(co<n1 && un<n2)
	{
		if (binary_decimal(atoi(inp1[co].binary)) < binary_decimal(atoi(inp2[un].binary))	)
		{
			mergres[nt]=inp1[co];

			co++;
			nt++;
		}
		else if (binary_decimal(atoi(inp2[un].binary)) < binary_decimal(atoi(inp1[co].binary))	)
		{
			mergres[nt]=inp2[un];
			un++;
			nt++;
		}
		else
		{
			mergres[nt]=inp1[co];
			co++;
			nt++;

			mergres[nt]=inp2[un];
			un++;
			nt++;
		}
	}

	//below are for the rest of the array
	if (co<n1)
	{
		for (i = co; i < n1; ++i)
		{
			mergres[nt]=inp1[i];
			nt++;
		}
	}
	if (un<n2)
	{
		for (i = un; i < n2; ++i)
		{
			mergres[nt]=inp2[i];
			nt++;
		}
	}

}

//SORT BIG DATA BASED ON DECIMAL VALUE IN ASCENDING ORDER
void sorter( int arlen, puck inp[arlen])
{
	int i, j=0;		//Comparative Index
	puck insert;		//The insertion variable
	for (i = 0; i < arlen; i++)		//Sorting the data
	{
		insert=inp[i];
		j=i-1;

		while( binary_decimal(atoi(insert.binary)) < binary_decimal(atoi(inp[j].binary)) && j>=0)
		{
			inp[j+1]=inp[j];
			j--;
		}
		inp[j+1]=insert;
	}

}
