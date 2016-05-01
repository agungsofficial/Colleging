#include "stark.h"		//The Header Included

//I PRINTING THE RESULT
	void printresult(int k, sche invoke[k])
	{
		char dayname[k][666];		//This variable store what to print	
		int i;		//Comparative index for loop

		for (i = 0; i < k; ++i)		//Loop according the number of free time
		{
			if (invoke[i].day==1)		//If the day number is 1
			{
				strcpy( dayname[i], "Senin");		//Then we'll print it as mentioned for the array number i
			}
			if (invoke[i].day==2)		//If the day number is 2
			{
				strcpy(dayname[i], "Selasa");		//Then we'll print it as mentioned for the array number i
			}
			if (invoke[i].day==3)		//If the day number is 3
			{
				strcpy(dayname[i], "Rabu");			//Then we'll print it as mentioned for the array number i
			}
			if (invoke[i].day==4)		//If the day number is 4
			{
				strcpy(dayname[i], "Kamis");		//Then we'll print it as mentioned for the array number i
			}
			if (invoke[i].day==5)		//If the day number is 5
			{
				strcpy(dayname[i], "Jumat");		//Then we'll print it as mentioned for the array number i
			}
			if (invoke[i].day==6)		//If the day number is 6
			{
				strcpy(dayname[i], "Sabtu");		//Then we'll print it as mentioned for the array number i
			}
			if (invoke[i].day==7)		//If the day number is 7
			{
				strcpy(dayname[i], "Minggu");		//Then we'll print it as mentioned for the array number i
			}
		}
		if (k!=0)		//If there is a free time or more	
		{
			{
				for (i = 0; i < k; ++i)		//Print the result 
				{
					printf("%s %d.00 - %d.00\n",dayname[i], invoke[i].bottom, invoke[i].top );
				}
			}
		}
		else		//If there is no free time
		{
			printf("Tidak ada irisan jadwal.\n");		//Print this out
		}
	}
//II FIND THE FREE TIMES OF THE THREE - Using sequential search
	void invoker( int clockwerk[8][25], int t, int m, int p)
	{
		sche invoke[64];		//This variable is used to store the free time
		int thirst, blood;		//This variable is used to store indication of stopping the searching loop
		int i, j=0, l;		//Three-levels comparative index for loop
		int k=0;	//Counter of freetime

		for (i = 1; i < 6; i++)		//This loop runs through days
		{
			thirst=0;		//Initialize the indicators
			blood=0;		//Initialize the indicators
			for (j = 7; j < 18 ; ++j)		//This loop runs through hours
			{	
				if (clockwerk[i][j]==0)		//If the loop found free time (0)
				{	
					invoke[k].day=i;		//The day is saved
					invoke[k].bottom=j;		//The beginning of free time is saved
					l=j;		//Equaliazing the level three loop

					while ( j < 19 && blood==0)		//Start a new loop
					{						
						if (clockwerk[i][j]==1 || j==18	 )		//If the process found another busy time
						{
							blood=1;		//The indicator is set, stopping the process
							invoke[k].top=j;		//The free time is over
						}
						else 
						{
							j++;	//If not found, the process continues	 	
						}
					}
					k++;		//Count the free time
					}
				}
			}
		printresult(k, invoke);		//Print the result

	}

//III CONVERT THEIR SCHEDULE INTO A BINARY TIMETABLE
	void ward (int t, int m, int p, sche tobi[], sche moni[], sche piyu[] )
	{
		int clockwerk[8][25]={0};		//The declaration of binary timetable

		int i, j;		//The two level comparative index


		for (i = 0; i < t; ++i)		//For the number of Tobi's array
		{
			for (j = tobi[i].bottom; j < tobi[i].top; ++j)
			{
				clockwerk[tobi[i].day][j]=1;		//We fill the busy schedule with 1
			}
		}

		for (i = 0; i < m; ++i)		//For the number of Moni's  array
		{
			for (j = moni[i].bottom; j < moni[i].top; ++j)
			{
				clockwerk[moni[i].day][j]=1;		//We fill the busy schedule with 1
			}
		}

		for (i = 0; i < p; ++i)		//For the number of Piyu's array
		{
			for (j = piyu[i].bottom; j < piyu[i].top; ++j)
			{
				clockwerk[piyu[i].day][j]=1;		//We fill the busy schedule with 1
			}
		}
		invoker(clockwerk, t, m, p);		//Call this procedure to fin th shared free time
	}
