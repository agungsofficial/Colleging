#include "stark.h"		//The Header Included

// ------MAIN FUNCTION----- //

int main()
{
	//I INPUTS AND VARIABLE DECLARATIONS 
		int t, m , p;		//The number of each arrays' element
		int i;		//Comparative Index for looping

		scanf("%d", &t);		//Scanning the number of t array's element
		puck tobi[t];		//Declaration of Tobi's big data array
		for (i = 0; i < t; i++)
		{
			scanf("%s", &tobi[i].binary);		//Input of Tobi's big data array
		}

		scanf("%d", &m);		//Scanning the number of m array's element
		puck moni[m];		//Declaration of Moni's big data array
		for (i = 0; i < m; i++)
		{
			scanf("%s", &moni[i].binary);		//Input of Moni's big data array
		}

		scanf("%d", &p);		//Scanning the number of p array's element
		puck piyu[p];		//Declaration of Piyu's big data array
		for (i = 0; i < p; i++)
		{
			scanf("%s", &piyu[i].binary);		//Input of Piyu's big data array
		}

	//II SORT EVERY ARRAY
		sorter(t, tobi);
		sorter(m, moni);		//SORT EVERYTHING!!!!!
		sorter(p, piyu);
		puck suspi[t+m+p];

	//III SCAN THE SUSPICIOUS DATA
		susscan(t, m, p, tobi, moni, piyu, suspi);		//SCAN EVERYTHING!!!!!!
		//Tact, Scan, COUNTER SHOCK!!!!

	//IV MERGE EVERY ARRAY
		puck mergres1[t+m];		//These two variable stores the merging result of three arrays
		puck mergres2[t+m+p];

		sortmerg(t, m, tobi, moni, mergres1);		//MERGE EVERYTHING!!!!!!
		sortmerg(t+m, p, mergres1, piyu, mergres2 );

	//V OUTPUT
		if (t+m+p !=0)		//If there is data, print the result
		{
			printf("Laporan Data Biner\n");		//Output bloat according to the problem
			printf("====================\n");
		}
		for (i = 0; i < t+m+p; ++i)
		{
			printf("%s\n",mergres2[i].binary);		//PRINT EVERYTHING!!!!!!!!
		}
		for (i = 0; i < susscan(t, m, p, tobi, moni, piyu, suspi); ++i)
		{
			printf("%d\n",binary_decimal(atoi(suspi[i].binary)) );		//Printing the suspicious list
		}

	return 0;
}