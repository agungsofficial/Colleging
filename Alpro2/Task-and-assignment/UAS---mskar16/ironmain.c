#include "stark.h"


int main()
{
//DECLARE THE VARIABLES
	char pita[1001];		
	int counter=0;

//INPUT - Just one tho
	scanf("%1000[^\n]s", pita);		//Input to the Ribbon

//PROCCESS IS CALLED
	startkata(pita);		//Starting process
	while(eopkata(pita)==0)		//While the sentence still goes on
	{
		counter+=kvacount(getckata()) ;	//Count the character that correspond to the condition
		inckata(pita);		//Increment the word
	}

//OUTPUT - Yea, just one
	printf("%d\n",counter );		//Print hasilnya


	return 0;
}