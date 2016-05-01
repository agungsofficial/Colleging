#include "stark.h"		//The Header Included

// ------MAIN FUNCTION----- //

int main(int argc, char const *argv[])
{
	//I INPUTS AND VARIABLE DECLARATIONS
		int i;		//Comparative  index for looping
		int t, m, p;		//The number of each arrays' element

		scanf("%d", &t);		//Scanning the number of tobi's array's element
		sche tobi[t];		//Declaration of Tobi's schedule
		for (i = 0; i < t; ++i)
		{
			scanf("%d %d %d", &tobi[i].day, &tobi[i].bottom, &tobi[i].top);		//Input of Tobi's schedule
		}	

		scanf("%d", &m);		//Scanning the number of Moni's array's element
		sche moni[m];		//Declaration of Moni's schedule
		for (i = 0; i < m; ++i)
		{
			scanf("%d %d %d", &moni[i].day, &moni[i].bottom, &moni[i].top);		//Input of Moni's schedule
		}

		scanf("%d", &p);		//Scanning the number of Piyu's array's element
		sche piyu[p];		//Declaration of Piyu's schedule
		for (i = 0; i < p; ++i)
		{
			scanf("%d %d %d", &piyu[i].day, &piyu[i].bottom, &piyu[i].top);		//Input of Piyu's schedule
		}

//II Procedure is Called
	ward (t, m, p, tobi, moni, piyu );		//Passing Tobi's, Moni's, and Piyu's Schedue along with their number of array





	return 0;
}
