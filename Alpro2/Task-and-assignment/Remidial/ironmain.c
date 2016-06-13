#include "stark.h"

int main()
{
	//DECLARE THE VARIABLES
	int i;
	char pita[1000];
	char word[99][99];	
	int n=1;

	//INPUT - Just one tho
	scanf("%999[^\n]s", pita);

	//PROCCESS IS CALLED - Slicing per word
	startkata(pita);		//Starting process
	strcpy(word[n], getckata());		//Copy string
	while (eopkata(pita)==0)
	{
		inckata(pita);	//Increment the word	
		n++;		//count the word
		strcpy(word[n], getckata());		//Copy string
	}

	//SORTING  THE ARAY OF STRING
	sort(n+1, word);

	//OUTPUT - Yea, just one
	for (i = 0; i < n; ++i)
	{
		printf("%s",word[i] );		//pRINT THE RESULT
		if (i!=n-1)
		{
			printf("\n");		//Print the newline accordingly
		}
	}




	return 0;
}