#include "stark.h"

void startkata(char pita[])
{
//START READING THE WORD
	indeks=0;		//Zero-ed
	panjangkata=0;		//Zero-ed
	while (pita[indeks] == ' ')
	{
		indeks++;
	}
	while((pita[indeks] != ' ') && (pita[indeks]) != '.' )
	{
		ckata[panjangkata] = pita[indeks];
		indeks++;
		panjangkata++;
	}
	ckata[panjangkata] = '\0';	
}

void resetkata()
{
	//RESETTING THE PROGRESS UP TO NOW
	panjangkata=0;
	ckata[panjangkata]= '\0';
}

void inckata(char pita[])
{
	//INCREMENT TO THE NEXT WORD
	panjangkata=0;
	while (pita[indeks] == ' ')
	{
		indeks++;
	}
	while((pita[indeks] != ' ') && (pita[indeks]) != '.' )
	{
		ckata[panjangkata] = pita[indeks];
		indeks++;
		panjangkata++;
	}
	ckata[panjangkata] = '\0';	
}

char* getckata()
{
	//GETTING THE CURRENT WORD TO MAIN
	return ckata;
}

int getpanjangkata()
{
	//GETTING THE LENGTH OF THE WORD
	return panjangkata;
}

int eopkata(char pita[])
{
	//MARK THE END OF THE SENTENCE
	if (pita[indeks]== '.')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void sort(int x, char str[99][99])
{
	//SORTING USING SELECTION METHOD
	int miniidx;
	int i, j;
	char temp[100];		
	//Sorting process
	for (i = 0; i < x-1; i+=1)
	{
		//minimum index initialized
		miniidx=i;
		for (j = i+1; j < x; j+=1)
		{
			//compare it!
			if (strcmp(str[miniidx], str[j])==-1)
			{
				miniidx=j;
			}
		}
		//Exchange the sequence
		strcpy(temp, str[i]);
		strcpy(str[i], str[miniidx]);
		strcpy(str[miniidx], temp);
	}
}
